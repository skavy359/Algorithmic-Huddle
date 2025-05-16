#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> ans(n);

    bool check = true;

    for (int i = 0; i < n; i++)
    {
        cin >> ans[i].first >> ans[i].second;
    }

    sort(ans.begin(), ans.end());

    for (int i = 0; i < n; i++)
    {
        if (s > ans[i].first)
        {
            s += ans[i].second;
        }
        else
        {
            check = false;
            break;
        }
    }

    if (check)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}