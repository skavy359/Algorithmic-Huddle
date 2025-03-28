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
        int temp1 = 500 - (x * 2) + 1000 - ((x + y) * 4);
        int temp2 = 1000 - (y * 4) + 500 - ((x + y) * 2);
        cout << max(temp1, temp2) << endl;
    }
    return 0;
}
