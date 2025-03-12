#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 15;
    if (arr[0] > 15)
    {
        cout << ans << endl;
        return 0;
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - arr[i - 1] > 15)
        {
            ans = arr[i - 1] + 15;
            cout << ans << endl;
            return 0;
        }
    }
    if (arr[n - 1] + 15 >= 90)
    {
        cout << 90 << endl;
    }
    else
    {
        cout << arr[n - 1] + 15 << endl;
    }
    return 0;
}