#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (y <= x)
            cout << y << endl;
        else
            cout << x + (y - x) * 2 << endl;
    }
    return 0;
}
