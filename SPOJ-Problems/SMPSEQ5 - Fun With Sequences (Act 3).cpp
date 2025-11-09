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
    int m;
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    int mini = min(n, m);
    for (int i = 0; i < mini; i++)
    {
        if (arr[i] == arr2[i])
        {
            cout << i + 1 << " ";
        }
    }
    return 0;
}
