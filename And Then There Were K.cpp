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
        int ans = 0;
        for (int i = 0; i < 30; ++i)
        {
            if (((n >> i) & 1) == 1)
            {
                ans = i;
            }
        }
        cout << (1 << ans) - 1 << "\n";
    }
    return 0;
}
