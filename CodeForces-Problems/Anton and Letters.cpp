#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    set<char> ans;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ',' && s[i] != ' ' && s[i] != '{' && s[i] != '}')
        {
            ans.insert(s[i]);
        }
    }
    cout << ans.size() << endl;
    return 0;
}