#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b, c, n;
        cin >> a >> b >> c >> n;

        long long sum = a + b + c + n;
        long long num_max = a;
        num_max = max(a, max(b, c));
        if (sum % 3 == 0 && num_max <= sum / 3)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}