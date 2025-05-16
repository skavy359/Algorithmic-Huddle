#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_map<string, int> mp;
    vector<pair<string, int>> temp;

    while (n--)
    {
        string s;
        cin >> s;
        int x;
        cin >> x;
        temp.push_back({s, x});
        mp[s] += x;
    }

    int maxValue = INT_MIN;
    string ans;

    for (const auto &pair : mp)
    {
        maxValue = max(maxValue, pair.second);
    }

    unordered_map<string, int> final;

    for (auto &i : temp)
    {
        final[i.first] += i.second;
        if (final[i.first] >= maxValue && mp[i.first] == maxValue)
        {
            ans = i.first;
            break;
        }
    }
    
    cout << ans << endl;
    return 0;
}