#include <bits/stdc++.h>
using namespace std;

unordered_map<long long, long long> dp;

long long solve(long long n)
{
    if (n <= 3)
        return 1;
    if (dp.count(n))
        return dp[n];
    return dp[n] = 2 * solve(n / 4);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}