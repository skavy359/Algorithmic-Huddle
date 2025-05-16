#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int j = 0;
    int position = 1;
    for (int i = 0; i < t.length(); i++)
    {
        if (s[j] == t[i])
        {
            position++;
            j++;
        }
    }
    cout << position << endl;
    return 0;
}