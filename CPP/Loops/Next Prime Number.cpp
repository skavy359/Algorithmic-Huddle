bool isPrime(int n)
{
    if (n == 1)
        return false;
    if (n == 2)
        return true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int nextPrime(int n)
{
    n++;
    while (true)
    {
        if (isPrime(n))
        {
            return n;
        }
        else
        {
            n++;
        }
    }
}