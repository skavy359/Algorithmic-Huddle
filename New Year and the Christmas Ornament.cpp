#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y, b, r;
    cin >> y >> b >> r;
    int x = min(y, min(b - 1, r - 2));
    int ans = x * 3 + 3;
    cout << ans << endl;
    return 0;
}