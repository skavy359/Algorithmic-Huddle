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
        string s;
        cin >> s;
        int ans = 0;
        if (s.find("2025") == string::npos || s.find("2026") != string::npos)
        {
            cout << "0" << endl;
            continue;
        }
        else
        {
            cout << "1" << endl;
        }
    }
    return 0;
}