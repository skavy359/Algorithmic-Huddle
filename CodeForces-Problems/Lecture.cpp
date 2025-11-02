#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    unordered_map<string, string> mp;
    while (m--)
    {
        string a, b;
        cin >> a >> b;
        mp[a] = b;
    }
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s.length() <= mp[s].length())
        {
            cout << s << " ";
        }
        else if (s.length() > mp[s].length())
        {
            cout << mp[s] << " ";
        }
    }
    return 0;
}