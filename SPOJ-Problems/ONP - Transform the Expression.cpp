#include <bits/stdc++.h>
using namespace std;

int prec(char c)
{
    if (c == '^')
        return 3;
    if (c == '*' || c == '/')
        return 2;
    if (c == '+' || c == '-')
        return 1;
    return -1;
}

bool isRightAssoc(char c)
{
    return c == '^';
}

string infixToPostfix(string s)
{
    stack<char> st;
    string res;
    for (char c : s)
    {
        if (isalpha(c))
            res += c;
        else if (c == '(')
            st.push(c);
        else if (c == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                res += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.empty() && st.top() != '(' &&
                   (prec(st.top()) > prec(c) ||
                    (prec(st.top()) == prec(c) && !isRightAssoc(c))))
            {
                res += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << infixToPostfix(s) << endl;
    }
    return 0;
}
