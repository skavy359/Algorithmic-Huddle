#include <iostream>
using namespace std;

int main()
{
    long long x;
    cin >> x;
    long long ans = 0;
    while (x > 0)
    {
        ans += (x & 1);
        x >>= 1;
    }
    cout << ans << endl;
    return 0;
}