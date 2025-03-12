#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n <= 1)
    {
        cout << "NO" << endl;
        return 0;
    }
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int min1 = INT_MAX, min2 = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min1)
        {
            min2 = min1;
            min1 = arr[i];
        }
        else if (arr[i] > min1 && arr[i] < min2)
        {
            min2 = arr[i];
        }
    }
    if (min2 == INT_MAX)
        cout << "NO" << endl;
    else
        cout << min2 << endl;
    return 0;
}