#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, l;
    cin >> k >> l;
    int temp = l;
    int ans = 0;
    while (l % k == 0)
    {
        ans++;
        l /= k;
    }
    if (l == 1)
    {
        cout << "YES" << endl;
        cout << ans - 1 << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}