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
        int sum = 0;
        while (n > 1)
        {
            int a;
            cin >> a;
            sum += a;
            n--;
        }
        if (sum <= 0)
        {
            cout << abs(sum) << endl;
        }
        else
        {
            cout << 0 - sum << endl;
        }
    }
    return 0;
}