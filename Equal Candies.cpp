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
        long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        long min = arr[0];
        long sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != min)
            {
                sum += arr[i] - min;
            }
        }
        cout << sum << endl;
    }
    return 0;
}