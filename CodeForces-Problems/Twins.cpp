#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.rbegin(), arr.rend());
    int sum = accumulate(arr.begin(), arr.end(), 0);
    int ans = 0;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        temp += arr[i];
        sum -= arr[i];
        ans++;
        if (temp > sum)
        {
            break;
        }
    }
    cout << ans << endl;
}