class Solution
{
public:
    int longestSubarray(vector<int> &nums)
    {
        int ans = 0;
        int n = nums.size();
        int temp = 2;
        for (int i = 2; i < n; i++)
        {
            if (nums[i] == nums[i - 1] + nums[i - 2])
            {
                temp++;
            }
            else
            {
                ans = max(ans, temp);
                temp = 2;
            }
        }
        ans = max(ans, temp);
        return ans;
    }
};