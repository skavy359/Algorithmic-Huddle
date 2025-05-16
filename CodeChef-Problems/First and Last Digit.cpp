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
        int first = 0, last = n % 10;
        while (n > 0)
        {
            first = n % 10;
            n /= 10;
        }
        cout << first + last << endl;
    }
    return 0;
}
