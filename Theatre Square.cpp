#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, m, a;
    cin >> n >> m >> a;
    int res1 = (n + a - 1) / a;
    int res2 = (m + a - 1) / a;
    cout << (long long)res1 * res2;
    return 0;
}