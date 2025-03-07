#include <iostream>
using namespace std;

bool check(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    if (sum % 4 == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    int a;
    cin >> a;
    while (true)
    {
        if (check(a))
        {
            cout << a << endl;
            break;
        }
        else
        {
            a++;
        }
    }
    return 0;
}