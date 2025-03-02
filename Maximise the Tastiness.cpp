#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int sum = 0;
        if (a > b)
        {
            sum += a;
        }
        else
        {
            sum += b;
        }
        if (c > d)
        {
            sum += c;
        }
        else
        {
            sum += d;
        }
        cout << sum << endl;
    }
    return 0;
}
