#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<string> ans;
    int i = 0;
    while (n > 4)
    {
        ans.push_back(s.substr(i, 3));
        i += 3;
        n -= 3;
    }
    if (n == 4)
    {
        ans.push_back(s.substr(i, 2));
        ans.push_back(s.substr(i + 2, 2));
    }
    else
    {
        ans.push_back(s.substr(i, n));
    }
    for (int j = 0; j < ans.size(); j++)
    {
        cout << ans[j];
        if (j != ans.size() - 1)
            cout << "-";
    }
    cout << endl;
    return 0;
}