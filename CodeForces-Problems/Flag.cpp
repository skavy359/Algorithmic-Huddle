#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (arr[i][j] != arr[i][0])
            {
                flag = false;
                break;
            }
        }
        if (!flag)
            break;
    }
    if (flag)
    {
        for (int i = 1; i < n; i++)
        {
            if (arr[i][0] == arr[i - 1][0])
            {
                flag = false;
                break;
            }
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}