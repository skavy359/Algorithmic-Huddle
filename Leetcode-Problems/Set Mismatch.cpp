class Solution
{
public:
    vector<int> findErrorNums(vector<int> &nums)
    {
        int n = nums.size();
        int total = n * (n + 1) / 2;
        int sum = accumulate(nums.begin(), nums.end(), 0);
        sort(nums.begin(), nums.end());
        vector<int> ans;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                ans.push_back(nums[i]);
                break;
            }
        }
        int missing = total - sum + ans[0];
        ans.push_back(missing);
        return ans;
    }
};