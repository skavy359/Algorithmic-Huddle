#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (count(s.begin(), s.end(), s[0]) == (int)s.length())
        {
            cout << "NO" << endl;
            continue;
        }
        string temp = s;
        for (int i = 1; i < temp.length(); i++)
        {
            if (temp[i] != temp[0])
            {
                swap(temp[i], temp[0]);
                break;
            }
        }
        cout << "YES" << endl
             << temp << endl;
    }
    return 0;
}