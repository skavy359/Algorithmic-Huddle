class Solution
{
public:
    int dominantIndex(vector<int> &nums)
    {
        int maxi = *max_element(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if (maxi < nums[i] * 2 && nums[i] != maxi)
            {
                return -1;
            }
        }
        auto it = find(nums.begin(), nums.end(), maxi);
        return distance(nums.begin(), it);
    }
};