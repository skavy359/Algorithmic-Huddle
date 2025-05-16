#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int i = 1;
    while (true)
    {
        if (i % 2 != 0)
        {
            if (a >= i)
            {
                a -= i;
            }
            else
            {
                cout << "Vladik" << endl;
                return 0;
            }
        }
        else
        {
            if (b >= i)
            {
                b -= i;
            }
            else
            {
                cout << "Valera" << endl;
                return 0;
            }
        }
        i++;
    }
    return 0;
}