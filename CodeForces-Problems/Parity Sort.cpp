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
        {
            cin >> arr[i];
        }
        vector<int> b(arr.begin(), arr.end());
        sort(b.begin(), b.end());
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != b[i] % 2)
            {
                flag = false;
                cout << "NO" << endl;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
    }
    return 0;
}