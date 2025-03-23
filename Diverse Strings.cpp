#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        if (s.length() <= 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            sort(s.begin(), s.end());
            bool check = true;
            for (int i = 0; i < s.length() - 1; i++)
            {
                if (s[i + 1] - s[i] != 1)
                {
                    check = false;
                    break;
                }
            }
            if (check)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}