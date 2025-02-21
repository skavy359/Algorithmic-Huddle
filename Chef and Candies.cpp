#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        if (x >= n)
        {
            cout << 0 << endl;
        }
        else
        {
            int diff = n - x;
            int ans = diff / 4;
            if (diff % 4 != 0)
            {
                ans++;
            }
            cout << ans << endl;
        }
    }
    return 0;
}
