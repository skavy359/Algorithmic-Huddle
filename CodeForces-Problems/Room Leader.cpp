#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int maxi = INT_MIN;
    string ans = "";
    while (n--)
    {
        string s;
        cin >> s;
        int p, m, a, b, c, d, e;
        cin >> p >> m >> a >> b >> c >> d >> e;
        if (a + b + c + d + e + (p * 100) - (m * 50) > maxi)
        {
            maxi = a + b + c + d + e + (p * 100) - (m * 50);
            ans = s;
        }
    }
    cout << ans << endl;
    return 0;
}