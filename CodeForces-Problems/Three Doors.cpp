#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int arr[4];
        cin >> arr[1] >> arr[2] >> arr[3];
        int first = arr[x];
        if (first == 0)
        {
            cout << "NO" << endl;
            continue;
        }
        int second = arr[first];
        if (second == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}