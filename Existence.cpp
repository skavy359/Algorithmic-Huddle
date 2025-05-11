#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int x, y;
        cin >> x >> y;
        if (x * x == y * 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
