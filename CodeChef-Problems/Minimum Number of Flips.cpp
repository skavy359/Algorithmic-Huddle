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
        int arr[n];
        int pos = 0, neg = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
                pos++;
            else
                neg++;
        }
        if (n % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << abs(pos - neg) / 2 << endl;
        }
    }
    return 0;
}
