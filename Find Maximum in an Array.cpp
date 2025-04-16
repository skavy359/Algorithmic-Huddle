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
        long long int arr[n];
        long long int maxi = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            maxi = max(maxi, arr[i]);
        }
        cout << maxi << endl;
    }
    return 0;
}
