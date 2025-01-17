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
        int ans[n];
        int index = 0, left = 0, right = n-1;

        while (left <= right)
        {
            if (left <= right)
            {
                ans[index++] = arr[left++];
            }
            if (left <= right)
            {
                ans[index++] = arr[right--];
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
