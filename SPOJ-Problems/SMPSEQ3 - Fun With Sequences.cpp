#include <bits/stdc++.h>
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
    int m;
    cin >> m;
    unordered_set<int> st;
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
        st.insert(arr2[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (!st.count(arr[i]))
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}
