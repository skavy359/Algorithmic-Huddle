#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, r;
        cin >> x >> y >> r;
        int ans = x + (r / 30);
        cout << (int)ceil((double)ans / y) << endl;
    }
    return 0;
}