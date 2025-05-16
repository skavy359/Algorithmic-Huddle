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
        int single = n * a;
        int two = (n / 2) * b;
        if (n % 2 != 0)
        {
            int rem = n % 2;
            two += (rem * a);
        }
        if (single > two)
        {
            cout << two << endl;
        }
        else
        {
            cout << single << endl;
        }
    }
    return 0;
}