#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    int tallest = 0;
    for (auto i : mp)
    {
        tallest = max(tallest, i.second);
    }
    cout << tallest << " " << mp.size() << endl;
    return 0;
}