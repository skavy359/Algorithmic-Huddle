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
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        long long int ans = 1;
        for (long long int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                ans += i;
                if (i != n / i)
                    ans += n / i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}