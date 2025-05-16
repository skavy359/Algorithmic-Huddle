#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> odd;
    vector<pair<int, int>> even;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a % 2 == 0)
            odd.push_back({a, i + 1});
        else
            even.push_back({a, i + 1});
    }
    if (odd.size() == 1)
    {
        cout << odd[0].second << endl;
    }
    else
    {
        cout << even[0].second << endl;
    }
    return 0;
}