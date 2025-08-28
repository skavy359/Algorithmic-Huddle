#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    vector<int> arr1(n), arr2(n);
    for (int i = 0; i < n; i++)
        cin >> arr1[i] >> arr2[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j && arr1[i] == arr2[j])
                ans++;
        }
    }
    cout << ans << endl;
    return 0;
}