#include <iostream>
#include <deque>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        deque<char> ans;
        char maximum = 'a';
        for (int i = 0; i < s.length(); i++)
        {
            maximum = max(maximum, s[i]);
            ans.push_back(s[i]);
        }

        bool res = true;

        for (char ch = maximum; ch >= 'a'; ch--)
        {
            if (ans.size() == 0)
            {
                res = false;
                break;
            }
            if (ans.front() == ch)
            {
                ans.pop_front();
            }
            else if (ans.back() == ch)
            {
                ans.pop_back();
            }
            else
            {
                res = false;
                break;
            }
        }
        if (ans.size() == 0 && res)
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