#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, c;
        cin >> l >> c;
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == 0 || j == 0 || i == l - 1 || j == c - 1)
                {
                    cout << "*";
                }
                else
                    cout << ".";
            }
            cout << endl;
        }
        if (t)
            cout << endl;
    }
    return 0;
}