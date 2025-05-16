class Solution
{
public:
    double minimumAverage(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        double average = (double)(nums[0] + nums[nums.size() - 1]) / 2;
        for (int i = 0; i < nums.size() / 2; i++)
        {
            int minElement = nums[i];
            int maxElement = nums[nums.size() - 1 - i];
            average = min(average, (double)(minElement + maxElement) / 2);
        }
        return average;
    }
};