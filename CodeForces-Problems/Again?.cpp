#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if ((s[s.length() - 1] - '0') % 2 == 0)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << "1" << endl;
    }
    return 0;
}