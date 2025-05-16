#include <bits/stdc++.h>
using namespace std;

bool check(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return false;
    return true;
}

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
        int temp = 0;
        bool trial = true;
        for (int i = 0; i < n; i++)
        {
            if (check(s[i]))
            {
                temp++;
            }
            else
            {
                temp = 0;
            }
            if (temp >= 4)
            {
                trial = false;
                cout << "NO" << endl;
                break;
            }
        }
        if (trial)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
