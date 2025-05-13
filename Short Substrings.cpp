#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string b;
        cin >> b;
        string ans = "";
        for (int i = 0; i < b.length(); i++)
        {
            if (i == 0 || i == b.length() - 1)
                ans += b[i];
            else
            {
                ans += b[i];
                i++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}