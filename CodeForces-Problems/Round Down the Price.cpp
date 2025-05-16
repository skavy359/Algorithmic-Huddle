#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        int i = 1;
        while (i * 10 <= m)
        {
            i *= 10;
        }
        cout << m - i << endl;
    }
    return 0;
}