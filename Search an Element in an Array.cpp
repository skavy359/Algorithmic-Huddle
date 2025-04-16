#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == x)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}