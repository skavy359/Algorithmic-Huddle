#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end());
        bool flag = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i + 1] - arr[i] > 1)
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}