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

        if (n % 7 == 0)
        {
            cout << n << endl;
        }

        else
        {
            for (int i = 0; i <= 9; i++)
            {
                int rem = ((n / 10) * 10) + i;
                if (rem % 7 == 0)
                {
                    cout << rem << endl;
                    break;
                }
            }
        }
    }

    return 0;
}