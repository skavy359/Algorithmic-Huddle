#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    vector<int> result;
    unordered_set<int> check;

    for (int i = x - 1; i >= 0; i--)
    {
        if (check.find(arr[i]) == check.end())
        {
            result.push_back(arr[i]);
            check.insert(arr[i]);
        }
    }

    reverse(result.begin(), result.end());
    cout << result.size() << endl;
    for (int num : result)
    {
        cout << num << " ";
    }
    return 0;
}