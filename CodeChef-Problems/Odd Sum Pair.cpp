#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int even = 0, odd = 0;
        if (a % 2 == 0)
            even++;
        else
            odd++;
        if (b % 2 == 0)
            even++;
        else
            odd++;
        if (c % 2 == 0)
            even++;
        else
            odd++;
        if (even > 0 && odd > 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
