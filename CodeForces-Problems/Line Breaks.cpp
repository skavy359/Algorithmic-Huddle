#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> s;
        while (n--)
        {
            string word;
            cin >> word;
            s.push_back(word);
        }
        int temp = 0;
        int ans = 0;
        bool flag = false;
        for (string word : s)
        {
            if (temp + word.length() > m)
            {
                cout << ans << endl;
                flag = true;
                break;
            }
            temp += word.length();
            ans++;
        }
        if (!flag)
            cout << ans << endl;
    }
    return 0;
}