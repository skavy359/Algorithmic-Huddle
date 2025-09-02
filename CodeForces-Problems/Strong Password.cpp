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
        bool inserted = false;

        for (int i = 1; i < (int)s.size(); i++)
        {
            if (s[i] == s[i - 1])
            {
                char ch = (s[i] == 'a' ? 'b' : 'a');
                s.insert(i, 1, ch);
                inserted = true;
                break;
            }
        }

        if (!inserted)
        {
            char ch = (s[0] == 'a' ? 'b' : 'a');
            s.insert(s.begin(), ch);
        }

        cout << s << "\n";
    }
    return 0;
}
