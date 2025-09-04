class Solution
{
public:
    int maximumPossibleSize(vector<int> &nums)
    {
        int maxi = -1, ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] >= maxi)
            {
                maxi = nums[i];
                ans++;
            }
        }
        return ans;
    }
};