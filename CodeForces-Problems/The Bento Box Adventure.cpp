#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
        cin >> arr[i];
    sort(arr, arr + 4);
    for (int i = 0; i < 4; i++)
    {
        if ((i + 1) != arr[i])
        {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << 5 << endl;
    return 0;
}