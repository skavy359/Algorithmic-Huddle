#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = n;
        int l = 0;
        int r = n - 1;
        while (l < r && ((s[l] == '0' && s[r] == '1') || (s[l] == '1' && s[r] == '0')))
        {
            ans -= 2;
            l++;
            r--;
        }
        cout << ans << endl;
    }
    return 0;
}