#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n;
        cin >> x >> n;
        int ans = n - (x * 100);
        if (ans <= 0)
            cout << 0 << endl;
        else
            cout << (int)ceil((double)ans / 100) << endl;
    }
    return 0;
}
