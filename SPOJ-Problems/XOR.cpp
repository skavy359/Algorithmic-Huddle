#include <iostream>
using namespace std;

int main()
{
    int p, q;
    cin >> p >> q;
    if (p == 0)
    {
        if (q == 0)
            cout << "0" << endl;
        else
            cout << "1" << endl;
    }
    else
    {
        if (q == 0)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}