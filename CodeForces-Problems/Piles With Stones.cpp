#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr1[n];
    int arr2[n];
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
        sum1 += arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
        sum2 += arr2[i];
    }
    if (sum1 >= sum2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}