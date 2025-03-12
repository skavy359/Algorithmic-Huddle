#include <iostream>
using namespace std;

bool digitCheck(string temp)
{
    int x = 0, y = 0;
    for (int i = 0; i < temp.length() / 2; i++)
    {
        x = x + (temp[i] - '0');
    }
    for (int i = temp.length() / 2; i < temp.length(); i++)
    {
        y = y + (temp[i] - '0');
    }
    return x == y;
}

int main()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    bool isLucky = true;
    for (char ch : a)
    {
        if (ch != '4' && ch != '7')
        {
            isLucky = false;
            break;
        }
    }
    if (isLucky && digitCheck(a))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}