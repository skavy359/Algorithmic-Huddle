class Solution
{
public:
    long long sumAndMultiply(long long n)
    {
        long long ans = 0, sum = 0, i = 1;
        while (n > 0)
        {
            int rem = n % 10;
            if (rem != 0)
            {
                sum += rem;
                ans += (rem * i);
                i *= 10;
            }
            n /= 10;
        }
        return ans * sum;
    }
};