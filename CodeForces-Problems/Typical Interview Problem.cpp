#include <bits/stdc++.h>
using namespace std;

int main()
{
    string fb = "";
    for (int i = 1; fb.size() < 100; i++)
    {
        if (i % 3 == 0)
            fb += 'F';
        if (i % 5 == 0)
            fb += 'B';
    }

    int t;
    cin >> t;
    while (t--)
    {
        int k;
        string s;
        cin >> k >> s;
        if (fb.find(s) != string::npos)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
