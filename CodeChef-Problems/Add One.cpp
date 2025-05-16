#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        int carry = 1;
        for (int i = n - 1; i >= 0; i--)
        {
            int num = s[i] - '0' + carry;
            s[i] = (num % 10) + '0';
            carry = num / 10;
        }
        if (carry)
        {
            s = '1' + s;
        }
        cout << s << endl;
    }
    return 0;
}
