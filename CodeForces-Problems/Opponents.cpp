#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    int count = 0;
    int ans = 0;
    while (d--)
    {
        bool valid = false;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                valid = true;
                break;
            }
        }
        if (valid)
            count++;
        else
            count = 0;
        ans = max(ans, count);
    }
    cout << ans << endl;
    return 0;
}