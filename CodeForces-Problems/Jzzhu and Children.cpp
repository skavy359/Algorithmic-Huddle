#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    queue<pair<int, int>> q;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        q.push({i + 1, a});
    }
    int ans = -1;
    while (!q.empty())
    {
        auto [i, j] = q.front();
        q.pop();
        j -= m;
        if (j > 0)
        {
            q.push({i, j});
        }
        else
        {
            ans = i;
        }
    }
    cout << ans << endl;
    return 0;
}