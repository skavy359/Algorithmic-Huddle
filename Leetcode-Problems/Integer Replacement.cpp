class Solution
{
public:
    int integerReplacement(long long n)
    {
        if (n == 1)
            return 0;
        if (n % 2 == 0)
        {
            return 1 + integerReplacement(n / 2);
        }
        else if (n % 2 != 0)
        {
            if (n == 3)
                return 2;
            else
            {
                if ((n & 2) == 0)
                {
                    return 2 + integerReplacement((n - 1) / 2);
                }
                else
                    return 2 + integerReplacement((n + 1) / 2);
            }
        }
        return 0;
    }
};