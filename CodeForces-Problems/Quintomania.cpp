#include <iostream>
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
        bool ans = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (abs(arr[i] - arr[i + 1]) != 5 && abs(arr[i] - arr[i + 1]) != 7)
            {
                ans = false;
                break;
            }
        }
        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
