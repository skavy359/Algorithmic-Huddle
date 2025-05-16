class Solution
{
public:
    int countElements(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int mini = nums[0];
        int count = nums.size();
        int maxi = nums[nums.size() - 1];
        for (int i : nums)
        {
            if (i == mini || i == maxi)
            {
                count--;
            }
        }
        return count;
    }
};