class Solution
{
public:
    int countPartitions(vector<int> &nums)
    {
        int left = 0, total = 0;
        for (int i : nums)
            total += i;
        int ans = 0;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            left += nums[i];
            total -= nums[i];
            if ((left - total) % 2 == 0)
                ans++;
        }
        return ans;
    }
};