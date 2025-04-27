#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        string s;
        cin >> s;
        int c = 0, n = 0, d = 0;
        for (int i = 0; i < 14; i++)
        {
            if (s[i] == 'C')
                c++;
            else if (s[i] == 'D')
                d++;
            else
                n++;
        }
        int carlsen = 2 * c + 1 * d;
        int chef = 2 * n + 1 * d;
        if (carlsen > chef)
        {
            cout << 60 * x << endl;
        }
        else if (chef > carlsen)
        {
            cout << 40 * x << endl;
        }
        else
        {
            cout << 55 * x << endl;
        }
    }
    return 0;
}
