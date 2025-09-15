#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    unordered_map<int, int> mp;
    for (int i : arr)
        mp[i]++;
    int mini = INT_MIN;
    for (auto i : mp)
    {
        if (i.second > mini)
        {
            mini = i.second;
        }
    }
    cout << n - mini << endl;
    return 0;
}