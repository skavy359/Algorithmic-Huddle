#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr(m);
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int diff = INT_MAX;
    for (int i = 0; i < m - n; i++)
    {
        int temp = arr[i + n - 1] - arr[i];
        diff = min(diff, temp);
    }
    cout << diff << endl;
    return 0;
}