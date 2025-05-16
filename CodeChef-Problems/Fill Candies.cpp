#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, m;
        cin >> n >> k >> m;
        int ans = n / (k * m);
        if (n % (k * m) != 0)
        {
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
