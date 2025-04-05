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
        bool check = true;
        if (n <= 1)
        {
            cout << "no" << endl;
            continue;
        }
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                check = false;
                break;
            }
        }
        if (check)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}
