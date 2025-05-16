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
        int totalSeats = x * 10;
        if (y <= totalSeats)
        {
            cout << y * z << endl;
        }
        else
        {
            cout << totalSeats * z << endl;
        }
    }
    return 0;
}
