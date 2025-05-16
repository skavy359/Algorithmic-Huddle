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

    vector<int> ans;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            if (count > 0)
            {
                ans.push_back(count);
            }
            count = 1;
        }
        else
        {
            count++;
        }
    }
    ans.push_back(count);
    cout << ans.size() << endl;
    for (int i : ans)
    {
        cout << i << " ";
    }
    return 0;
}