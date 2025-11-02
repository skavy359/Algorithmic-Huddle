#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    long long ans = 0;
    for (int i = a; i <= b; i++)
    {
        ans += i * i * 1LL;
    }
    cout << ans;
    return 0;
}