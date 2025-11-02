#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long ans;
        if (n == 1)
            ans = 2;
        else
            ans = (n + 2) / 3;
        cout << ans << endl;
    }
    return 0;
}
