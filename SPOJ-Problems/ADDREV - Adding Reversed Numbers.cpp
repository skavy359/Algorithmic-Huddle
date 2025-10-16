#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int n)
{
    int rev = 0;
    while (n > 0)
    {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        a = reverseNumber(a);
        b = reverseNumber(b);
        int sum = a + b;
        int result = reverseNumber(sum);
        cout << result << "endl";
    }
    return 0;
}