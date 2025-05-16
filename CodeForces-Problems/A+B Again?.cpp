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

        int sum = n % 10;
        n = n / 10;
        sum += n;
        cout << sum << endl;
    }
    return 0;
}
