#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr1[n];
        int arr2[n];
        int arr3[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        sort(arr1, arr1 + n);
        sort(arr2, arr2 + n);

        for (int i = 0; i < n; i++)
        {
            arr3[i] = arr1[i] + arr2[n - 1 - i];
        }
        set<int> ans(arr3, arr3 + n);
        for (int i = 0; i < n; i++)
        {
            arr3[i] = arr1[i] + arr2[i];
        }
        ans.insert(arr3, arr3 + n);
        if (ans.size() >= 3)
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