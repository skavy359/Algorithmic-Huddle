#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = (50 * n) - (0.7 * (n * 50));
        cout << ans << endl;
    }
    return 0;
}
