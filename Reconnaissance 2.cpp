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
    int minimum = abs(arr[0] - arr[n - 1]);
    int index1 = 0;
    int index2 = n - 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (abs(arr[i] - arr[i + 1]) < minimum)
        {
            minimum = abs(arr[i] - arr[i + 1]);
            index1 = i;
            index2 = i + 1;
        }
    }
    cout << index1 + 1 << " " << index2 + 1 << endl;
    return 0;
}