#include <bits/stdc++.h>
using namespace std;

long long reverseNumber(long long n)
{
    long long rev = 0;
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
        long long a, b;
        cin >> a >> b;
        a = reverseNumber(a);
        b = reverseNumber(b);
        long long sum = a + b;
        long long result = reverseNumber(sum);
        cout << result << endl;
    }
    return 0;
}
