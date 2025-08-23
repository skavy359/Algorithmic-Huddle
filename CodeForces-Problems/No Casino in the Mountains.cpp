#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int ans = 0;
        for (int i = 0; i < n - k + 1;)
        {
            bool flag = true;
            for (int j = 0; j < k; j++)
            {
                if (arr[i + j] == 1)
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                ans++;
                i += k + 1;
            }
            else
            {
                i++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}