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
        int max1 = -1, max2 = -1;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > max1)
            {
                max2 = max1;
                max1 = arr[i];
            }
            else if (arr[i] > max2)
            {
                max2 = arr[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == max1)
            {
                cout << arr[i] - max2 << " ";
            }
            else
            {
                cout << arr[i] - max1 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}