#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, x;
        cin >> n >> s >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int sum = accumulate(a.begin(), a.end(), 0);
        if (sum > s)
        {
            cout << "NO" << endl;
            continue;
        }
        else if (sum == s)
        {
            cout << "YES" << endl;
            continue;
        }
        else
        {
            int rem = s - sum;
            if (rem % x == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}