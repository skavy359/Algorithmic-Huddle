#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    unordered_map<char, int> mp;
    for (char c : s)
    {
        mp[c]++;
    }
    long long ans = 0;
    for (auto i : mp)
    {
        ans += (1LL * i.second * i.second);
    }
    cout << ans << endl;
    return 0;
}