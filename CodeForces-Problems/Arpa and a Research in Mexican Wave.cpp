#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k, t;
    cin >> n >> k >> t;
    long long int ans;
    if (t <= k)
        ans = t;
    else
    {
        if (t <= n)
            ans = k;
        else
            ans = k + n - t;
    }
    cout << ans << endl;
    return 0;
}