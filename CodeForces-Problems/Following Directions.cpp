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
        int x = 0, y = 0;
        bool flag = false;
        for (char c : s)
        {
            if (c == 'U')
                y++;
            else if (c == 'D')
                y--;
            else if (c == 'L')
                x--;
            else if (c == 'R')
                x++;
            if (x == 1 && y == 1)
            {
                flag = true;
                cout << "YES" << endl;
                break;
            }
        }
        if (!flag)
            cout << "NO" << endl;
    }
    return 0;
}