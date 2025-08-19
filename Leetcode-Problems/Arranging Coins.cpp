class Solution
{
public:
    int arrangeCoins(int n)
    {
        long long N = n;
        long long k = (sqrt(8 * N + 1) - 1) / 2;
        return (int)k;
    }
};
