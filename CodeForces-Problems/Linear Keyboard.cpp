#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string k;
        cin >> k;
        string s;
        cin >> s;
        unordered_map<char, int> mp;
        int val = 1;
        for (int i = 0; i < k.length(); i++)
        {
            mp[k[i]] = i + 1;
        }
        int ans = 0;
        for (int i = 1; i < s.length(); i++)
        {
            ans += abs(mp[s[i]] - mp[s[i - 1]]);
        }
        cout << ans << endl;
    }
    return 0;
}