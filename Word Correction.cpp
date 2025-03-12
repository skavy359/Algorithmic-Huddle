#include <iostream>
using namespace std;

bool check(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y')
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        ans += s[i];
        if (ans.length() > 1 && check(ans[ans.length() - 1]) && check(ans[ans.length() - 2]))
        {
            ans.pop_back();
        }
    }
    cout << ans << endl;
    return 0;
}