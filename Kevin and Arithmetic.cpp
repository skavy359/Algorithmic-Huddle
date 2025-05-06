#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> even, odd;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            if (x % 2 == 0)
                even.push_back(x);
            else
                odd.push_back(x);
        }

        vector<long long> arr;
        for (auto x : even)
            arr.push_back(x);
        for (auto x : odd)
            arr.push_back(x);

        long long sum = 0;
        int ans = 0;

        for (auto x : arr)
        {
            sum += x;
            if (sum % 2 == 0)
            {
                ans++;
                while (sum % 2 == 0)
                {
                    sum /= 2;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}