#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n + 1, 0);
    vector<int> temp(n);
    for (int i = 0; i < n; i++)
    {
        cin >> temp[i];
        arr[temp[i]]++;
    }
    long long int ans = 0;

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] >= 2)
        {
            ans += 1LL * arr[i] * (arr[i] - 1) / 2 * (n - arr[i]);
        }
    }
    cout << ans << endl;
    return 0;
}