#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        for (int i = 2; i < n; i++)
        {
            if (i % y == 0)
                continue;
            else if (i % x == 0)
                cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}