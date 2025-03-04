#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int product = 1;
        int minimum = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        arr[0]++;
        for (int i = 0; i < n; i++)
        {
            product *= arr[i];
        }
        cout << product << endl;
    }
    return 0;
}