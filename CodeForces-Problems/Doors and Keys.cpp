#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        set<char> st;
        bool flag = true;
        for (char c : s)
        {
            if (c == 'r' || c == 'g' || c == 'b')
                st.insert(c);
            if (c == 'R')
            {
                if (!st.count('r'))
                {
                    flag = false;
                    break;
                }
            }
            else if (c == 'B')
            {
                if (!st.count('b'))
                {
                    flag = false;
                    break;
                }
            }
            if (c == 'G')
            {
                if (!st.count('g'))
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}