#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int first, second;
        if (x % 10 == 0)
        {
            first = x / 10;
        }
        else
        {
            first = x / 10 + 1;
        }
        if (y % 10 == 0)
        {
            second = y / 10;
        }
        else
        {
            second = y / 10 + 1;
        }
        cout << abs(second - first) << endl;
    }
    return 0;
}
