#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int ans = -1;
    int moves = (n + 1) / 2;
    for (int i = moves; i <= n; i++)
    {
        if (i % m == 0)
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}