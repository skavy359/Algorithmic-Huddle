#include <bits/stdc++.h>
using namespace std;

int sum(long long n)
{
    int temp = 0;
    while (n > 0)
    {
        temp += n % 10;
        n /= 10;
    }
    return temp;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long ans;
        if (n % 2050 != 0)
        {
            ans = -1;
        }
        else
        {
            ans = n / 2050;
            ans = sum(ans);
        }
        cout << ans << endl;
    }
    return 0;
}