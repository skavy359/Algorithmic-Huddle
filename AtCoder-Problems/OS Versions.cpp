#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x, y;
    cin >> x >> y;
    if (x == "Ocelot")
    {
        if (y == "Ocelot")
        {
            cout << "Yes" << endl;
        }
        else if (y == "Lynx")
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else if (x == "Serval")
    {
        if (y == "Ocelot")
        {
            cout << "Yes" << endl;
        }
        else if (y == "Lynx")
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    else if (x == "Lynx")
    {
        cout << "Yes" << endl;
    }
    return 0;
}