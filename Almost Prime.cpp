#include <bits/stdc++.h>
using namespace std;

bool almostPrime(int n)
{
    int factors = 0;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            factors++;
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }
    return factors == 2;
}

int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (almostPrime(i))
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}