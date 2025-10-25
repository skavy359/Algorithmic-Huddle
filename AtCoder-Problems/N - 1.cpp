#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
        cin >> arr[i], sum += arr[i];
    for (int i = 0; i < n; i++)
    {
        if (sum - arr[i] == m)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}