#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string hel = "hello";
    int i = 0, j = 0;
    ;
    while (i < s.length() && j < hel.length())
    {
        if (s[i] == hel[j])
        {
            j++;
        }
        i++;
    }
    if (j == hel.length())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}