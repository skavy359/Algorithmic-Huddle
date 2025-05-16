#include <iostream>
using namespace std;

bool check(int n, int arr[], int start_index)
{
    for (int i = start_index; i <= n; i += 2)
    {
        if (arr[i] % 2 != arr[start_index] % 2)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        if (check(n, arr, 1) && check(n, arr, 2))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}