#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        a.push_back(l);
        b.push_back(r);
    }

    int k;
    cin >> k;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (k <= b[i])
        {
            ans++;
        }
    }

    cout << ans;
    return 0;
}
