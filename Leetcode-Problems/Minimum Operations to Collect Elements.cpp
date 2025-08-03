class Solution
{
public:
    int minOperations(vector<int> &nums, int k)
    {
        vector<int> arr(k, 0);
        int n = 0;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            if (nums[i] <= k)
            {
                if (arr[nums[i] - 1] == 0)
                {
                    arr[nums[i] - 1] = 1;
                    n++;
                }
            }
            if (n == k)
                return nums.size() - i;
        }
        return 1;
    }
};