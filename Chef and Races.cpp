#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, a, b;
        cin >> x >> y >> a >> b;
        int ans = 0;
        if (x != a && x != b)
            ans++;
        if (y != a && y != b)
            ans++;
        cout << ans << endl;
    }
    return 0;
}
