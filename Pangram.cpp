#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;

    if (n < 26)
    {
        cout << "NO" << endl;
        return 0;
    }

    set<int> ans;
    for (char ch : str)
    {
        ans.insert(tolower(ch));
    }
    if (ans.size() == 26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}