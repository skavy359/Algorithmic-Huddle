#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 6 || n > 8)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    return 0;
}