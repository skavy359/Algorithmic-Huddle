#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> ans;
    while (n--)
    {
        string s;
        cin >> s;
        ans[s]++;
    }

    string res;
    int maximum = 0;
    for (auto &temp : ans)
    {
        if (temp.second > maximum)
        {
            maximum = temp.second;
            res = temp.first;
        }
    }

    cout << res << endl;
    return 0;
}