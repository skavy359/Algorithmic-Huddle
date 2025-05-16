#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int s, t;
    cin >> s >> t;
    if (s == t)
    {
        cout << 0 << endl;
        return 0;
    }
    if (s > t)
    {
        swap(s, t);
    }

    int sum = 0;
    for (int i = s - 1; i < t - 1; i++)
    {
        sum += a[i];
    }
    int total = accumulate(a.begin(), a.end(), 0);
    int sum2 = total - sum;

    cout << min(sum, sum2) << endl;
    return 0;
}