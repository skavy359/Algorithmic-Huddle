#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t, f;
    cin >> s >> t >> f;
    string temp = s + t;
    sort(temp.begin(), temp.end());
    sort(f.begin(), f.end());
    if (temp == f)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}