#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if (m % n != 0)
    {
        cout << "-1" << endl;
    }
    else
    {
        int Fact2 = 0, Fact3 = 0;
        int x = m / n;
        while (x % 2 == 0)
        {
            x /= 2;
            Fact2++;
        }
        while (x % 3 == 0)
        {
            x /= 3;
            Fact3++;
        }
        if (x == 1)
        {
            cout << Fact2 + Fact3 << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}