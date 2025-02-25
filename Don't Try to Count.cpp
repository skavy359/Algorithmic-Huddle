#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        string x, s;
        cin >> n >> m >> x >> s;
        int count = 0, test = 6, z = 0;
        bool found = false;
        while (test--)
        {
            if (x.find(s) != string::npos)
            {
                found = true;
                break;
            }
            count++;
            x += x;
        }
        if (found)
        {
            cout << count << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}