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
        int ans = 0;
        set<char> st;
        for (char c : s)
        {
            ans++;
            if (!st.count(c))
                ans++;
            st.insert(c);
        }
        cout << ans << endl;
    }
    return 0;
}