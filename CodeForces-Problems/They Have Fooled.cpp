#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 0 || n == 1)
    {
        cout << "10" << endl;
    }
    else if (n == 3 || n == 10)
    {
        cout << "9" << endl;
    }
    else if (n == 12 || n == 4 || n == 2)
    {
        cout << "8" << endl;
    }
    else if (n == 5 || n == 6 || n == 7 || n == 8)
    {
        cout << "7" << endl;
    }
    else if (n == 11)
    {
        cout << "6" << endl;
    }
    else if (n == 9)
    {
        cout << "0" << endl;
    }
    return 0;
}
