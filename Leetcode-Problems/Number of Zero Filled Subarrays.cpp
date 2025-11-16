class Solution
{
public:
    long long zeroFilledSubarray(vector<int> &nums)
    {
        long long zeros = 0;
        long long ans = 0;
        for (int i : nums)
        {
            if (i == 0)
            {
                zeros++;
            }
            else
            {
                ans = ans + (zeros * (zeros + 1) / 2);
                zeros = 0;
            }
        }
        ans = ans + (zeros * (zeros + 1) / 2);
        return ans;
    }
};