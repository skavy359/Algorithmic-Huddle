#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int dist1 = abs(a - 1);
        int dist2 = abs(b - c) + abs(c - 1);

        if (dist1 < dist2)
            cout << "1" << endl;
        else if (dist1 > dist2)
            cout << "2" << endl;
        else
            cout << "3" << endl;
    }
    return 0;
}
