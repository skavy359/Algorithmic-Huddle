#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    cin >> ch;
    string s;
    cin >> s;
    string seq = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string ans = "";
    if (ch == 'R')
    {
        for (int i = 0; i < s.length(); i++)
        {
            int idx = seq.find(s[i]);
            ans += seq[idx - 1];
        }
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            int idx = seq.find(s[i]);
            ans += seq[idx + 1];
        }
    }
    cout << ans << endl;
    return 0;
}