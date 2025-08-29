#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string ref = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
        string s;
        cin >> s;
        if (ref.find(s) != string::npos)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}