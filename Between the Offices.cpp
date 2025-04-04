#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0, temp = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'S' && s[i + 1] == 'F')
        {
            ans++;
        }
        else if (s[i] == 'F' && s[i + 1] == 'S')
        {
            temp++;
        }
    }
    if (ans > temp)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}