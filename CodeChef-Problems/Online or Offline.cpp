#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (0.9 * n > m)
        {
            cout << "DINING" << endl;
        }
        else if (0.9 * n < m)
        {
            cout << "ONLINE" << endl;
        }
        else
        {
            cout << "EITHER" << endl;
        }
    }
    return 0;
}
