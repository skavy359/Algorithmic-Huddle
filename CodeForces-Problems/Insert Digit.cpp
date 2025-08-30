#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        string s;
        cin >> s;
        string ans = "";
        bool done = false;
        for (int i = 0; i < n; i++)
        {
            if (!done && (s[i] - '0') < d)
            {
                ans += char('0' + d);
                done = true;
            }
            ans += s[i];
        }
        if (!done)
            ans += (char)d + '0';
        cout << ans << endl;
    }
    return 0;
}