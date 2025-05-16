#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    int a = 1, b = n;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            int temp = n / i;
            if (temp - i < b - a)
            {
                a = i;
                b = temp;
            }
        }
    }
    cout << a << " " << b << endl;
    return 0;
}