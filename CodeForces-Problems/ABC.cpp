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
        if (n > 2)
            cout << "NO" << endl;
        else
        {
            if (n == 1)
                cout << "YES" << endl;
            else if (n == 2)
            {
                if (s == "00" || s == "11")
                    cout << "NO" << endl;
                else
                    cout << "YES" << endl;
            }
        }
    }
    return 0;
}