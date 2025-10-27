#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<string, int> mp;
        string s;
        cin >> s;
        for (int i = 0; i < 38; i++)
        {
            string temp = s.substr(i, 3);
            mp[temp]++;
        }
        cout << n << " " << mp["TTT"] << " " << mp["TTH"] << " " << mp["THT"] << " " << mp["THH"] << " " << mp["HTT"] << " " << mp["HTH"] << " " << mp["HHT"] << " " << mp["HHH"] << endl;
    }
    return 0;
}