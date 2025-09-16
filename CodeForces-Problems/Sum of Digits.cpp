#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int ans = 0;
    while (s.length() > 1)
    {
        long long sum = 0;
        for (char c : s)
        {
            sum += c - '0';
        }
        s = to_string(sum);
        ans++;
    }
    cout << ans << endl;
    return 0;
}