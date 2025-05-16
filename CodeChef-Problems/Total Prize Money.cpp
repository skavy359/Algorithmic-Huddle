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
        int ans = x * 10 + y * 90;
        cout << ans << endl;
    }
    return 0;
}