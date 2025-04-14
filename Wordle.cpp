#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        string ans = "";
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] == b[i])
                ans += 'G';
            else
                ans += 'B';
        }
        cout << ans << endl;
    }
    return 0;
}
