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
        string temp = s;
        reverse(s.begin(), s.end());
        temp += s;
        cout << temp << endl;
    }
    return 0;
}