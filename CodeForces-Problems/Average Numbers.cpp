#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    long long sum = accumulate(arr.begin(), arr.end(), 0LL);
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (1LL * arr[i] * n == sum)
            ans.push_back(i + 1);
    }
    cout << ans.size() << "\n";
    for (int idx : ans)
        cout << idx << " ";
    cout << "\n";
    return 0;
}
