class Solution
{
public:
    int firstMissingPositive(vector<int> &nums)
    {
        int n = nums.size();
        vector<bool> arr(n, false);
        for (int i : nums)
        {
            if (i > 0 && i <= n)
                arr[i - 1] = true;
        }
        for (int i = 0; i < n; i++)
        {
            if (!arr[i])
            {
                return i + 1;
            }
        }
        return n + 1;
    }
};