#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int y;
        cin >> y;
        int ans = INT_MAX;
        while (y > 0)
        {
            ans = min(ans, y % 10);
            y /= 10;
        }
        cout << ans << endl;
    }
    return 0;
}