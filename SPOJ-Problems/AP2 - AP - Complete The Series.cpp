#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int a3, a3l, sum;
        cin >> a3 >> a3l >> sum;
        long long int n = (2 * sum) / (a3 + a3l);
        long long int d = (a3l - a3) / (n - 5);
        long long int a = a3 - 2 * d;

        cout << n << endl;
        for (long long int i = 0; i < n; i++)
        {
            cout << a + d * i << " ";
        }
        cout << endl;
    }
    return 0;
}