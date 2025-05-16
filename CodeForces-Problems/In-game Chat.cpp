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
        int count = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == ')')
                count++;
            else
                break;
        }
        if (count > (n - count))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}