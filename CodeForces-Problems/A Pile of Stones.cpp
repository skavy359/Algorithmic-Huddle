#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '-')
        {
            if (ans > 0)
            {
                ans--;
            }
        }
        else if (s[i] == '+')
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}