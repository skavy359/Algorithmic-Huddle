#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int sum = 0;
        bool check = true;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            if (sum >= k)
            {
                sum -= k;
            }
            else
            {
                check = false;
                cout << "NO" << " " << i + 1 << endl;
                break;
            }
        }
        if (check)
            cout << "YES" << endl;
    }
    return 0;
}
