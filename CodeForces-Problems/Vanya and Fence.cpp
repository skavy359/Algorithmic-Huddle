#include <iostream>
using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= h)
        {
            ans += 1;
        }
        else
        {
            ans += 2;
        }
    }

    cout << ans << endl;
    return 0;
}
