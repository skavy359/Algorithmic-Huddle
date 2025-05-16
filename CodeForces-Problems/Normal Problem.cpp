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
        string ans = "";
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == 'q')
            {
                ans += 'p';
            }
            if (s[i] == 'w')
            {
                ans += 'w';
            }
            if (s[i] == 'p')
            {
                ans += 'q';
            }
        }
        cout << ans << endl;
    }
    return 0;
}