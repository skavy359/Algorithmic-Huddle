#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if ((m - n) >= 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << n - m << endl;
        }
    }
    return 0;
}
