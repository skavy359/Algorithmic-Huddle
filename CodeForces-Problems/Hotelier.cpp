#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    string ans = "0000000000";
    for (char c : s)
    {
        if (c == 'L')
        {
            for (int i = 0; i < 10; i++)
            {
                if (ans[i] == '0')
                {
                    ans[i] = '1';
                    break;
                }
            }
        }
        else if (c == 'R')
        {
            for (int i = 9; i >= 0; i--)
            {
                if (ans[i] == '0')
                {
                    ans[i] = '1';
                    break;
                }
            }
        }
        else
        {
            ans[c - '0'] = '0';
        }
    }

    cout << ans << endl;
    return 0;
}
