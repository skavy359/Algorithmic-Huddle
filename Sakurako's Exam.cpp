#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        bool x = (a % 2 == 0);
        bool y = (b % 2 == 0);
        bool z = (a != 0);
        if (x && (y || z))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}