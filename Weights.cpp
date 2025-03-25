#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w, x, y, z;
        cin >> w >> x >> y >> z;
        if ((x == w) || (y == w) || (z == w) || x + y == w || x + z == w || y + z == w || x + y + z == w)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}