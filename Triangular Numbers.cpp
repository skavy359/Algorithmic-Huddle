#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool valid = false;
    for (int i = 1; i <= n; i++)
    {
        if ((i * (i + 1)) / 2 == n)
        {
            valid = true;
            break;
        }
    }
    if (valid)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}