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
        int first = s[0] - '0';
        int second = s[2] - '0';
        if (first < second)
        {
            s[1] = '<';
        }
        else if (second < first)
        {
            s[1] = '>';
        }
        else
        {
            s[1] = '=';
        }
        cout << s << endl;
    }
    return 0;
}