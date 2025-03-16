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
        int ans = (1.1 * x) - (x - y);
        cout << ans << endl;
    }
    return 0;
}
