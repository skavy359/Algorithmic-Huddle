#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a = 0, b = 1;
    double maxi = 0;

    for (int i = 1; i < n; i++)
    {
        int j = n - i;
        if (i < j && __gcd(i, j) == 1)
        {
            double val = (double)i / j;
            if (val > maxi)
            {
                maxi = val;
                a = i;
                b = j;
            }
        }
    }

    cout << a << " " << b << endl;
    return 0;
}