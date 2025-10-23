#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        map<char, int> mp = {{'A', 0}, {'B', 0}, {'C', 0}, {'D', 0}, {'E', 0}, {'F', 0}, {'G', 0}};
        for (char c : s)
        {
            mp[c]++;
        }
        int temp = 0;
        for (auto i : mp)
        {
            temp += max(0, m - i.second);
        }
        cout << temp << endl;
    }
    return 0;
}