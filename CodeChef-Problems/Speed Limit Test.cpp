#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, x, b, y;
        cin >> a >> x >> b >> y;
        if ((double)a / x > (double)b / y)
        {
            cout << "Alice" << endl;
        }
        else if ((double)a / x < (double)b / y)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Equal" << endl;
        }
    }
    return 0;
}
