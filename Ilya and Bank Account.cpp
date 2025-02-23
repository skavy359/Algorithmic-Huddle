#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    if (n > 0)
    {
        cout << n << endl;
    }
    else
    {
        int first = n / 10;
        int second = (n / 100) * 10 + (n % 10);
        if (first > second)
            cout << first << endl;
        else
            cout << second << endl;
    }
    return 0;
}