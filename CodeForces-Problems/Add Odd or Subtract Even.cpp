#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        long long int ans = 0;
        if (a > b)
        {
            long long int diff = a - b;
            if (diff % 2 == 0)
            {
                ans = 1;
            }
            else
            {
                ans = 2;
            }
        }
        else if (a < b)
        {
            long long int diff = b - a;
            if (diff % 2 == 0)
            {
                ans = 2;
            }
            else
                ans = 1;
        }
        cout << ans << endl;
    }
    return 0;
}