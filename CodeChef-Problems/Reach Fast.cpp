#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, k;
        cin >> a >> b >> k;
        int ans = 0;
        if (a == b)
        {
            ans = 0;
        }
        else if (a < b)
        {
            while (a < b)
            {
                ans++;
                a += k;
            }
        }
        else
        {
            while (b < a)
            {
                ans++;
                a -= k;
            }
        }
        cout << ans << endl;
    }
    return 0;
}