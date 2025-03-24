#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = max(abs(a - c), abs(b - d));
    cout << ans << endl;
    return 0;
}