#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int z = c;
        int y = b + z;
        int x = a + y;
        cout << x << " " << y << " " << z << endl;
    }
    return 0;
}