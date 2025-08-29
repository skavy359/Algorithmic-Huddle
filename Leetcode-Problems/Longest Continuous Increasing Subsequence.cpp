class Solution
{
public:
    int findLengthOfLCIS(vector<int> &nums)
    {
        int temp = 1, ans = 0;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i + 1] > nums[i])
            {
                temp++;
            }
            else
            {
                ans = max(ans, temp);
                temp = 1;
            }
        }
        ans = max(ans, temp);
        return ans;
    }
};