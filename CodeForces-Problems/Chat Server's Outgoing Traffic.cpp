#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    set<string> st;
    long long ans = 0;
    while (getline(cin, s))
    {
        if (s[0] == '+')
        {
            s = s.substr(1);
            st.insert(s);
        }
        else if (s[0] == '-')
        {
            s = s.substr(1);
            st.erase(s);
        }
        else
        {
            size_t pos = s.find(':');
            string message = s.substr(pos + 1);
            ans += (long long)message.length() * st.size();
        }
    }
    cout << ans << endl;
    return 0;
}