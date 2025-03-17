#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    string ans;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
            ans += s[i];
        else
        {
            int res = a.find(tolower(s[i]));
            if (res != string::npos)
            {
                ans += b[res];
            }
        }
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            ans[i] = toupper(ans[i]);
        }
    }
    cout << ans << endl;
    return 0;
}