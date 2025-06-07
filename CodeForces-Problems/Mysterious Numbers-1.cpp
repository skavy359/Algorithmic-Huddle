#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b;
    cin >> a >> b;
    long long int rev = 0;
    while (b > 0)
    {
        int rem = b % 10;
        rev = rev * 10 + rem;
        b /= 10;
    }
    cout << a + rev << endl;
    return 0;
}