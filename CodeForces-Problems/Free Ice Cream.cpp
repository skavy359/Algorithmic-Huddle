#include <iostream>
using namespace std;

int main()
{
    long long n, x;
    cin >> n >> x;
    long long iceCream = x, kids = 0;

    while (n--)
    {
        char c;
        long long d;
        cin >> c >> d;
        if (c == '+')
        {
            iceCream += d;
        }
        else if (c == '-')
        {
            if (iceCream - d >= 0)
                iceCream -= d;
            else
                kids++;
        }
    }
    cout << iceCream << " " << kids << endl;
    return 0;
}