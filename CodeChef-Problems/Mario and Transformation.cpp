#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        x = x + 2;
        if (x % 3 == 1)
        {
            cout << "SMALL" << endl;
        }
        else if (x % 3 == 2)
        {
            cout << "NORMAL" << endl;
        }
        else
        {
            cout << "HUGE" << endl;
        }
    }
    return 0;
}
