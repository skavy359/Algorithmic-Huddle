#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sum1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum1 += arr[i];
    }
    int m;
    cin >> m;
    int sum2 = 0;
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
        sum2 += arr2[i];
    }
    if (sum1 > sum2)
    {
        for (int i : arr)
        {
            cout << i << " ";
        }
    }
    else
    {
        for (int i : arr2)
        {
            cout << i << " ";
        }
    }
    return 0;
}
