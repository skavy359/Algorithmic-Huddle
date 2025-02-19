int gcd(int a, int b)
{
    // code here to calculate and return gcd of a and b
    int low = min(a, b);
    int ans;
    for (int i = 1; i <= low; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            ans = i;
        }
    }
    return ans;
}