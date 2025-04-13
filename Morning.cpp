#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        map<char, int> mp;
        for (char c = '1'; c <= '9'; c++)
        {
            mp[c] = (c - '0');
        }
        mp['0'] = 10;
        int ans = 0;
        char cur = '1';
        for (int i = 0; i < 4; i++)
        {
            ans += abs(mp[cur] - mp[str[i]]);
            cur = str[i];
        }
        cout << ans + 4 << '\n';
    }
    return 0;
}