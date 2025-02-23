#include <iostream>
using namespace std;

int factorial(int n)
{
    int product = 1;
    while (n > 0)
    {
        product *= n;
        n--;
    }
    return product;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << factorial(min(a, b));
    return 0;
}