#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 1; i <= n; i++)
    {
        if (arr[i - 1] != i)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << n + 1 << endl;
    return 0;
}