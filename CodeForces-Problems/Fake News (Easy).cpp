#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string x = "heidi";
    int i = 0;
    for (char c : s)
    {
        if (c == x[i])
        {
            i++;
        }
        if (i == x.length())
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}