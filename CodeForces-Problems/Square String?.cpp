#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        string temp = "";
        for (int i = 0; i < s.length() / 2; i++)
        {
            temp += s[i];
        }
        string ans = temp;
        ans += temp;
        if (ans == s)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}