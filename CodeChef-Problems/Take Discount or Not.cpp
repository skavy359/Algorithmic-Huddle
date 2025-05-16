#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int a[n];
        long long int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        // your code goes here
        long long int reduced = 0;
        for (int i = 0; i < n; i++)
        {
            reduced += max(0, a[i] - y);
        }
        if (sum > (reduced + x))
            cout << "COUPON" << endl;
        else
            cout << "NO COUPON" << endl;
    }
}
