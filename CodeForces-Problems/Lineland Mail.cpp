#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << arr[1] - arr[0] << " " << arr[n - 1] - arr[0] << endl;
    for (int i = 1; i < n - 1; i++)
    {
        long long int mini = min(arr[i] - arr[i - 1], arr[i + 1] - arr[i]);
        long long maxi = max(arr[i] - arr[0], arr[n - 1] - arr[i]);
        cout << mini << " " << maxi << endl;
    }
    cout << arr[n - 1] - arr[n - 2] << " " << arr[n - 1] - arr[0] << endl;
    return 0;
}