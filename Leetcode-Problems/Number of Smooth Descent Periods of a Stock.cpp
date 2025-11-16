class Solution
{
public:
    long long getDescentPeriods(vector<int> &prices)
    {
        long long temp = 1;
        long long ans = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] + 1 == prices[i - 1])
            {
                temp++;
            }
            else
            {
                ans = ans + (temp * (temp + 1) / 2);
                temp = 1;
            }
        }
        ans = ans + (temp * (temp + 1) / 2);
        return ans;
    }
};