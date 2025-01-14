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

        int count = 0;

        for (int a = 1; a < n; a++)
        {
            for (int b = 1; b < n; b++)
            {
                if (a == (n - b))
                {
                    count++;
                }
            }
        }

        cout << count << endl;
    }
    return 0;
}
