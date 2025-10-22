#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    while (cin >> a >> b >> c)
    {
        if (a == 0 && b == 0 && c == 0)
        {
            return 0;
        }
        int diff1 = b - a;
        int diff2 = c - b;
        if (diff1 == diff2)
        {
            cout << "AP " << c + diff1 << endl;
        }
        else
        {
            int cr = b / a;
            cout << "GP " << c * cr << endl;
        }
    }
    return 0;
}