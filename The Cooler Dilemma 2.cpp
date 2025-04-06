#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int x, y;
        cin >> x >> y;
        int ans = 0;
        if (y % x == 0)
        {
            ans = (y / x) - 1;
        }
        else
        {
            ans = y / x;
        }
        cout << ans << endl;
    }
    return 0;
}
