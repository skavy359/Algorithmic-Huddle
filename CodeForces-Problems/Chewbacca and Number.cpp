#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    string s = to_string(n);
    for (int i = 0; i < s.length(); i++)
    {
        int dig = s[i] - '0';
        int rem = 9 - dig;
        if (i == 0)
        {
            if (dig == 9)
                continue;
        }
        int mini = min(dig, rem);
        s[i] = mini + '0';
    }
    cout << s << endl;
    return 0;
}