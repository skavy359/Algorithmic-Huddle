class Solution
{
public:
    int minimumDeletions(vector<int> &nums)
    {
        int maxi = INT_MIN, mini = INT_MAX;
        int maxi_index = -1, mini_index = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > maxi)
            {
                maxi = nums[i];
                maxi_index = i;
            }
            if (nums[i] < mini)
            {
                mini = nums[i];
                mini_index = i;
            }
        }
        int n = nums.size();
        int front = max(maxi_index, mini_index) + 1;
        int back = n - min(maxi_index, mini_index);
        int combine = min(maxi_index, mini_index) + 1 + n - max(mini_index, maxi_index);
        return min({front, back, combine});
    }
};