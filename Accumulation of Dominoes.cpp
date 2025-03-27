#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m;
    cin >> n >> m;
    if (m == 1)
    {
        cout << n - 1 << endl;
        return 0;
    }
    cout << n * (m - 1);
    return 0;
}