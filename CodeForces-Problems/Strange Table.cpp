#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, m, x;
        cin >> n >> m >> x;
        long long int row = (x - 1) % n;
        long long int col = (x - 1) / n;
        long long int ans = (row * m) + col + 1;
        cout << ans << endl;
    }
    return 0;
}