#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int &x : arr)
            cin >> x;

        unordered_map<int, int> mp;
        int ans = 0;

        for (int i = 0; i < n; ++i)
        {
            mp[arr[i]]++;
            if (mp[0] >= 3 && mp[1] >= 1 && mp[2] >= 2 && mp[3] >= 1 && mp[5] >= 1)
            {
                ans = i + 1;
                break;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
