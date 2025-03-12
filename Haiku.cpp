#include <iostream>
using namespace std;

bool isVowel(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        return true;
    }
    return false;
}

int main()
{
    string a, b, c;
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);

    int x = 0, y = 0, z = 0;
    for (int i = 0; i < a.length(); i++)
    {
        if (isVowel(a[i]))
        {
            x++;
        }
    }
    for (int i = 0; i < b.length(); i++)
    {
        if (isVowel(b[i]))
        {
            y++;
        }
    }
    for (int i = 0; i < c.length(); i++)
    {
        if (isVowel(c[i]))
        {
            z++;
        }
    }

    if (x == 5 && y == 7 && z == 5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}