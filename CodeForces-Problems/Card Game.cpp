#include <bits/stdc++.h>
using namespace std;

int main()
{
    char t;
    string a, b;
    cin >> t >> a >> b;
    unordered_map<char, int> mp = {
        {'6', 1}, {'7', 2}, {'8', 3}, {'9', 4}, {'T', 5}, {'J', 6}, {'Q', 7}, {'K', 8}, {'A', 9}};
    if (a[1] == t && b[1] != t)
    {
        cout << "YES" << endl;
        return 0;
    }
    else if (a[1] != t && b[1] == t)
    {
        cout << "NO" << endl;
        return 0;
    }
    else if (a[1] == b[1] && mp[a[0]] > mp[b[0]])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}