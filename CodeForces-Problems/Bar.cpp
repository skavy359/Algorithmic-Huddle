#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    set<string> st{"ABSINTH", "BEER", "BRANDY",
                   "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA",
                   "VODKA", "WHISKEY", "WINE"};
    while (n--)
    {
        string s;
        cin >> s;
        if (isdigit(s[0]))
        {
            if (stoi(s) < 18)
                ans++;
        }
        else
        {
            if (st.count(s))
                ans++;
        }
    }
    cout << ans << endl;
    return 0;
}