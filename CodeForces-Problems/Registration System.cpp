#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_map<string, int> mp;
    while (n--)
    {
        string s;
        cin >> s;
        if (!mp.count(s))
        {
            mp[s]++;
            cout << "OK" << endl;
        }
        else
        {
            cout << s << mp[s] << endl;
            mp[s]++;
        }
    }
    return 0;
}