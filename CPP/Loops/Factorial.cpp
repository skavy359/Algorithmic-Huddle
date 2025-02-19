int nFactorial(int n)
{
    int ans = 1;

    // Write your code here
    while (n > 0)
    {
        ans *= n;
        n--;
    }

    return ans;
}