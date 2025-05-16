#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y, w;
    cin >> y >> w;
    int possible = 7 - max(y, w);
    int GCD = gcd(possible, 6);
    cout << possible / GCD << "/" << 6 / GCD << endl;
    return 0;
}