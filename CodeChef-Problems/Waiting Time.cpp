#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, x;
        cin >> k >> x;
        int ans = k * 7 - x;
        cout << ans << endl;
    }
    return 0;
}
