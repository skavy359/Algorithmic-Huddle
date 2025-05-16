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
        int ans = n;
        if (m >= n)
        {
            cout << ans << endl;
        }
        else
        {
            ans = ans + (n - m);
            cout << ans << endl;
        }
    }
    return 0;
}
