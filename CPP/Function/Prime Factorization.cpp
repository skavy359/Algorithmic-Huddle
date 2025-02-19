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

void printPrimeFactorization(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            int temp = i;
            while (n % temp == 0)
            {
                cout << i << " ";
                temp = temp * i;
            }
        }
    }
}