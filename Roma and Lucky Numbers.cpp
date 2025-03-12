#include <iostream>
using namespace std;

bool check(int n, int k)
{
    int count = 0;
    while (n > 0)
    {
        int rem = n % 10;
        if (rem == 4 || rem == 7)
        {
            count++;
        }
        n /= 10;
    }
    if (count <= k)
        return true;
    return false;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (check(arr[i], k))
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}