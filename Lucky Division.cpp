#include <iostream>
using namespace std;

bool islucky(int n)
{
    while (n > 0)
    {
        int rem = n % 10;
        if (rem != 4 && rem != 7)
        {
            return false;
        }
        n = n / 10;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int luckyNumbers[] = {4, 7, 44, 77, 47, 74, 444, 777, 447, 474, 744, 774, 747, 477};

    if (islucky(n))
    {
        cout << "YES" << endl;
        return 0;
    }

    for (int i : luckyNumbers)
    {
        if (n % i == 0)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}