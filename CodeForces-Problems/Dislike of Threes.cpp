#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int k;
        cin >> k;

        int ans = 0, count = 0;

        for (int i = 1; count < k; i++)
        {
            if (i % 3 != 0 && i % 10 != 3)
            {
                count++;
                ans = i;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
