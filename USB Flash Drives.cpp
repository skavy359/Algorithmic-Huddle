#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int sum = 0;
    int i = n - 1;
    int ans = 0;
    while (sum < m)
    {
        sum += arr[i];
        i--;
        ans++;
    }
    cout << ans << endl;
    return 0;
}