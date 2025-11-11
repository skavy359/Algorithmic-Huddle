#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int arr1[n], arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = max(0, i - x); j <= min(n - 1, i + x); j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << i + 1 << " ";
                break;
            }
        }
    }
    return 0;
}