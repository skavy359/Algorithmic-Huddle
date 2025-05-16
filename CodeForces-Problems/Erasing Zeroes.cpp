#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int first = -1, last = -1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                if (first == -1)
                {
                    first = i;
                }
                last = i;
            }
        }

        int ans = 0;
        if (first != -1)
        {
            for (int i = first; i <= last; i++)
            {
                if (s[i] == '0')
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}