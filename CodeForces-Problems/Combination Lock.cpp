#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string og, real;
    cin >> og >> real;
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        int a = og[i] - '0';
        int b = real[i] - '0';
        int d1 = abs(a - b);
        int d2 = 10 - d1;
        ans += min(d1, d2);
    }
    cout << ans << endl;
    return 0;
}