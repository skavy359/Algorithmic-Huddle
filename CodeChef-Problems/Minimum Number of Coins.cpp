#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        int x;
        cin >> x;
        if (x % 5 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            int tens = x / 10;
            x %= 10;
            int five = x / 5;
            count = tens + five;
            cout << count << endl;
        }
    }
    return 0;
}