#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, ans = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n > 0)
            ans += n;
    }
    cout << ans;
    return 0;
}