#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        if (n == 0)
        {
            cout << "n is zero" << endl;
        }
        else if (n > 0)
        {
            cout << n << " is positive number" << endl;
        }
        else
        {
            cout << n << " is negative number" << endl;
        }
    }
    return 0;
}