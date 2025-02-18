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
        int count = 0;
        if (a == 0)
            count++;
        if (b == 0)
            count++;
        if (c == 0)
            count++;
        if (count >= 2)
        {
            cout << "Water filling time" << endl;
        }
        else
        {
            cout << "Not now" << endl;
        }
    }
    return 0;
}
