#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<string, int> mp;
    for (int i = 0; i < n - 1; i++)
    {
        string temp = s.substr(i, 2);
        mp[temp]++;
    }
    int maxi = -1;
    string ans = "";
    for (auto i : mp)
    {
        if (i.second > maxi)
        {
            maxi = i.second;
            ans = i.first;
        }
    }
    cout << ans << endl;
    return 0;
}