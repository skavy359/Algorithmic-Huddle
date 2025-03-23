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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int k = 1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                if (i > 0 && arr[i - 1] == 1)
                {
                    k += 5;
                }
                else
                {
                    k++;
                }
            }
            else
            {
                if (i > 0 && arr[i - 1] == 0)
                {
                    k = -1;
                    break;
                }
            }
        }
        cout << k << endl;
    }
    return 0;
}