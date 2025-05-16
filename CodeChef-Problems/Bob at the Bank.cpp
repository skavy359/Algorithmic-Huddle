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
        if (y < x)
        {
            cout << w + ((x - y) * z) << endl;
        }
        else
        {
            cout << w - ((y - x) * z) << endl;
        }
    }
    return 0;
}
