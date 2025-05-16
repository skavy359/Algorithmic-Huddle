#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d, l, v1, v2;
    cin >> d >> l >> v1 >> v2;
    double ans = (double)(l - d) / (v1 + v2);
    cout << fixed << setprecision(20) << ans << endl;
    return 0;
}