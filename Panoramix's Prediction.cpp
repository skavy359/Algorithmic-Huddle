#include <iostream>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;
    if (!isPrime(m))
    {
        cout << "NO" << endl;
    }
    else
    {
        for (int i = n + 1; i <= m; i++)
        {
            if (isPrime(i))
            {
                if (i == m)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
                break;
            }
        }
    }
    return 0;
}