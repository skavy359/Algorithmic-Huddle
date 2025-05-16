#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string a;
        int x, y;
        cin >> a >> x >> y;
        if (x >= 2400)
        {
            if (y > x)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}