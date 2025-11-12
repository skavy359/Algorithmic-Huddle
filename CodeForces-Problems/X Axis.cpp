#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> arr(3);
        for (int i = 0; i < 3; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end());
        int mini = arr[1];
        int ans = 0;
        for (int i = 0; i < 3; i++)
        {
            ans += abs(arr[i] - mini);
        }
        cout << ans << endl;
    }
    return 0;
}