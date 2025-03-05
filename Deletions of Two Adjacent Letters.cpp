#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        char ch;
        cin >> ch;
        int temp = -1;
        vector<int> res;
        while ((temp = s.find(ch, temp + 1)) != string::npos)
        {
            res.push_back(temp);
        }
        bool found = false;
        for (int i = 0; i < res.size(); i++)
        {
            if (res[i] % 2 == 0)
            {
                found = true;
                break;
            }
        }
        if (found)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}