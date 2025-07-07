class Solution
{
public:
    vector<int> constructTransformedArray(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(n);
        for (int i = 0; i < nums.size(); i++)
        {
            int steps = nums[i];
            if (steps == 0)
            {
                ans[i] = nums[i];
            }
            else
            {
                steps = (i + steps) % n;
                if (steps < 0)
                    steps += n;
                ans[i] = nums[steps];
            }
        }
        return ans;
    }
};