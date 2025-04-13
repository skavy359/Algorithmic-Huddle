#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, a1, b1, a2, b2;
        cin >> a >> b >> a1 >> b1 >> a2 >> b2;
        if ((a1 == a && b1 == b) || (b1 == a && a1 == b))
        {
            cout << 1 << endl;
        }
        else if ((a2 == a && b2 == b) || (b2 == a && a2 == b))
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}
