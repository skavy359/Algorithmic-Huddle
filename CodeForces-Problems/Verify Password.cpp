#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool flag = true;
        for (int i = 1; i < s.length(); i++)
        {
            if (isalpha(s[i - 1]) && isdigit(s[i]))
            {
                flag = false;
            }
        }
        vector<int> let, dig;
        for (char c : s)
        {
            if (isalpha(c))
                let.push_back(c);
            else
                dig.push_back(c);
        }
        for (int i = 1; i < let.size(); i++)
        {
            if (let[i - 1] > let[i])
                flag = false;
        }

        for (int i = 1; i < dig.size(); i++)
        {
            if (dig[i - 1] > dig[i])
                flag = false;
        }
        if (!flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}