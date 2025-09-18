#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000003;

int main()
{
    string s;
    cin >> s;

    unordered_map<char, int> mp = {
        {'>', 8},
        {'<', 9},
        {'+', 10},
        {'-', 11},
        {'.', 12},
        {',', 13},
        {'[', 14},
        {']', 15}};

    long long ans = 0;
    for (char c : s)
    {
        ans = (ans * 16 + mp[c]) % MOD;
    }

    cout << ans % MOD << "\n";
    return 0;
}
