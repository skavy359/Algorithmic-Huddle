#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    unordered_map<int, int> ans;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (ans.find(arr[i]) == ans.end())
        {
            ans[arr[i]] = i + 1;
        }
    }

    if (ans.size() < k)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        int count = 0;
        for (auto it : ans)
        {
            cout << it.second << " ";
            count++;
            if (count == k)
            {
                break;
            }
        }
    }
    return 0;
}