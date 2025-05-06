#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y, a;
        cin >> x >> y >> a;
        long long d = a % (x + y);

        if (x <= d)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}