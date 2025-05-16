#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int hours = a;

    while (a >= b)
    {
        hours += (a / b);
        a = (a / b) + (a % b);
    }

    cout << hours << endl;
    return 0;
}