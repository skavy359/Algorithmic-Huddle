#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, z;
    cin >> n >> m >> z;
    int lcm = (n * m) / gcd(n, m);
    cout << z / lcm << endl;
    return 0;
}