#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int ans = x / y + (x % y);
        cout << ans << endl;
    }
    return 0;
}
