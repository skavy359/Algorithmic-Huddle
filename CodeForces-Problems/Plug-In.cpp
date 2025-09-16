#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    stack<char> st;
    for (char c : s)
    {
        if (!st.empty() && st.top() == c)
        {
            st.pop();
            continue;
        }
        st.push(c);
    }
    string ans = "";
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return 0;
}