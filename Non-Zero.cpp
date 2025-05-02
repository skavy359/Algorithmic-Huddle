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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = 0;
        int sum = 0;
        int count_zeroes = 0;

        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            count_zeroes += (arr[i] == 0);
        }

        int newSum = sum + count_zeroes;
        ans = count_zeroes;

        if (newSum == 0)
            ans++;
        cout << ans << endl;
    }
    return 0;
}