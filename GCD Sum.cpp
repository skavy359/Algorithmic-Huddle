#include <bits/stdc++.h>
using namespace std;

long long int digitSum(long long int n)
{
    long long int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int ans;
        while (true)
        {
            if (gcd(n, digitSum(n)) > 1)
            {
                ans = n;
                break;
            }
            else
            {
                n++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}