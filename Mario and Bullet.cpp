#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int ans = y / x;
        if (ans < z)
        {
            cout << z - ans << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}
