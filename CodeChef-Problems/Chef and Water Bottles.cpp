#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, k;
        cin >> n >> x >> k;
        int diff = k / x;
        if (n > diff)
        {
            cout << diff << endl;
        }
        else
        {
            cout << n << endl;
        }
    }
    return 0;
}
