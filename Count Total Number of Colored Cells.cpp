class Solution
{
public:
    long long coloredCells(int n)
    {
        long long ans = 1 + 2 * (n - 1) * (long long)n;
        return ans;
    }
};