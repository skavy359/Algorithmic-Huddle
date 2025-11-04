#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 0, temp = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            temp++;
        }
        else
        {
            ans = max(ans, temp);
            temp = 1;
        }
    }
    ans = max(ans, temp);
    cout << ans << endl;
    return 0;
}