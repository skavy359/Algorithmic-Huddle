class Solution
{
public:
    int partitionArray(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());
        int count = 1;
        int mini = nums[0];
        int i = 1;
        while (i < nums.size())
        {
            if (nums[i] - mini > k)
            {
                count++;
                mini = nums[i];
            }
            i++;
        }
        return count;
    }
};