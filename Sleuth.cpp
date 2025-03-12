#include <iostream>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int i = s.length() - 2;
    while (i >= 0 && !isalpha(s[i]))
    {
        i--;
    }

    char ch = tolower(s[i]);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y')
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}