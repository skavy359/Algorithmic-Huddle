#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;
    int maximum = max({x1, x2, x3, x4});
    int a, b, c;
    if (maximum == x1)
        a = maximum - x2, b = maximum - x3, c = maximum - x4;
    else if (maximum == x2)
        a = maximum - x1, b = maximum - x3, c = maximum - x4;
    else if (maximum == x3)
        a = maximum - x1, b = maximum - x2, c = maximum - x4;
    else
        a = maximum - x1, b = maximum - x2, c = maximum - x3;

    cout << a << " " << b << " " << c << endl;

    return 0;
}