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
        int ans = ((n * x) / 4);
        if ((n * x) % 4 != 0)
        {
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
