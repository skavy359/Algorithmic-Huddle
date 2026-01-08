class Solution
{
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2)
    {
        long long ans = 0, maxi = total / cost1;
        for (int i = 0; i <= maxi; i++)
        {
            ans = ans + ((total - (cost1 * i)) / cost2) + 1;
        }
        return ans;
    }
};