class Solution
{
public:
    int absDifference(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());
        int max = 0, min = 0;
        for (int i = 0; i < k; i++)
        {
            min += nums[i];
            max += nums[nums.size() - 1 - i];
        }
        return abs(max - min);
    }
};