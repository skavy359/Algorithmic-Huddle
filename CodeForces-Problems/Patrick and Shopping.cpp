#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;
    long long ans = min({(a + b + c), 2 * (a + b), 2 * (b + c), 2 * (a + c)});
    cout << ans << endl;
}