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
        int d[n];
        for (int i = 0; i < n; i++)
        {
            cin >> d[i];
        }
        // your code goes here
        bool check = true;
        for (int i = 1; i < n; i++)
        {
            if (d[i - 1] > d[i])
            {
                check = false;
                break;
            }
        }
        if (check)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}
