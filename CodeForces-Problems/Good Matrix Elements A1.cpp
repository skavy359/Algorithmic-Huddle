#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i][i];
        sum += arr[i][n - 1 - i];
    }
    int midRow = n / 2;
    int midCol = n / 2;
    for (int j = 0; j < n; j++)
    {
        sum += arr[midRow][j];
    }
    for (int j = 0; j < n; j++)
    {
        sum += arr[j][midCol];
    }

    sum -= (arr[n / 2][n / 2]) * 3;
    cout << sum << endl;
    return 0;
}