#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    int largest = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        while (arr[i] != largest)
        {
            ans++;
            arr[i]++;
        }
    }

    cout << ans << endl;
    return 0;
}
