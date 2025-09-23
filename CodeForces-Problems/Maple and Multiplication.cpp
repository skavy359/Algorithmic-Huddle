#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a == b)
            cout << "0" << endl;
        else
        {
            int l = lcm(a, b);
            int ans = 0;
            if (a != l)
                ans++;
            if (b != l)
                ans++;
            cout << ans << endl;
        }
    }
    return 0;
}