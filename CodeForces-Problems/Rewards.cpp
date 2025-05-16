#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, e, f, n;
    cin >> a >> b >> c >> d >> e >> f >> n;
    int cups = a + b + c;
    int medals = d + e + f;

    int temp1 = ceil(cups / 5.0);
    int temp2 = ceil(medals / 10.0);

    if (temp1 + temp2 <= n)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}