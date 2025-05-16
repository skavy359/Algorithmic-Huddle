#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int total_windows = m * 2;
    int ans = 0;
    while (n--)
    {
        int arr[total_windows];
        for (int i = 0; i < total_windows; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < m * 2; i++)
        {
            if (arr[i] == 1)
            {
                ans++;
                if (i % 2 == 0)
                {
                    i++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}