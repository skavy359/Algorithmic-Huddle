#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int even = n / 2;
        cout << even * a + (n - even) * b << endl;
    }
    return 0;
}
