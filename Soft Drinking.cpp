#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_drink = (k * l) / nl;
    int total_slices = c * d;
    int total_salt = p / np;

    cout << min(total_drink, min(total_slices, total_salt)) / n << endl;
    return 0;
}