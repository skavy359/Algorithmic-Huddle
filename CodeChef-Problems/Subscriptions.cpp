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
        if (n % 6 == 0)
        {
            cout << (n / 6) * x << endl;
        }
        else
        {
            int rem = n % 6;
            int ans = n / 6;
            if (rem != 0)
            {
                ans++;
            }
            cout << ans * x << endl;
        }
    }
    return 0;
}
