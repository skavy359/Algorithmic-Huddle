#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;
    long long ans = LONG_LONG_MIN;
    while (n--)
    {
        long long int f, t;
        cin >> f >> t;
        if (t > k)
        {
            ans = max(ans, f - t + k);
        }
        else
        {
            ans = max(ans, f);
        }
    }
    cout << ans << endl;
    return 0;
}