bool prime(int n)
{

    // Write your code here
    // returns a boolean value
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