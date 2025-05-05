#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        int n = s.length();
        string ans = "";
        if (n > 0 && s[0] != ' ')
        {
            ans += s[0];
        }

        for (int i = 1; i < n - 1; i++)
        {
            if (s[i] == ' ' && s[i + 1] != ' ')
            {
                i++;
                ans += s[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}