#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int k = log2(n);
        cout << k * a + (k - 1) * b << endl;
    }
    return 0;
}
