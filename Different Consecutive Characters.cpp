#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        int n;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == s[i + 1])
                count++;
        }
        cout << count << endl;
    }
    return 0;
}
