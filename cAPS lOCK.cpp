#include <bits/stdc++.h>
using namespace std;

bool check(string s)
{
    if (all_of(s.begin(), s.end(), ::isupper))
    {
        return true;
    }
    if (islower(s[0]) && all_of(s.begin() + 1, s.end(), ::isupper))
    {
        return true;
    }
    return false;
}

int main()
{
    string s;
    cin >> s;
    if (check(s))
    {
        for (char &c : s)
        {
            if (isupper(c))
            {
                c = tolower(c);
            }
            else
            {
                c = toupper(c);
            }
        }
    }
    cout << s << endl;
    return 0;
}