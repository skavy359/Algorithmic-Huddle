#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int ans = x * y;
        int breaks = x / 3;
        if (x % 3 == 0)
        {
            breaks--;
        }
        ans += breaks * z;
        cout << ans << endl;
    }
    return 0;
}
