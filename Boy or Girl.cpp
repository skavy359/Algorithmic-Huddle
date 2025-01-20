#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    string a;
    cin >> a;
    set<char> ans(a.begin(), a.end());
    if (ans.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}
