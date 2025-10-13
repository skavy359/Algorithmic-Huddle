#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s = "ROYGBIV";
    string ans = s;
    string temp = "GBIV";
    for (int i = 7; i < n; i++)
        ans += temp[(i - 7) % 4];
    cout << ans << endl;
    return 0;
}