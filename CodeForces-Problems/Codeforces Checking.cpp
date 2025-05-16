#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        char input;
        cin >> input;
        string s = "codeforces";
        bool found = false;
        for (int i = 0; i < 10; i++)
        {
            if (s[i] == input)
            {
                found = true;
                break;
            }
        }
        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}