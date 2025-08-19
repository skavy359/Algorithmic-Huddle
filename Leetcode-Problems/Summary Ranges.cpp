class Solution
{
public:
    vector<string> summaryRanges(vector<int> &nums)
    {
        vector<string> res;
        if (nums.empty())
            return res;

        string ans = "";
        int mini = nums[0];

        for (int i = 1; i < nums.size(); i++)
        {
            if ((long long)nums[i] != (long long)nums[i - 1] + 1)
            {
                if (mini == nums[i - 1])
                {
                    ans += to_string(mini);
                }
                else
                {
                    ans += to_string(mini) + "->" + to_string(nums[i - 1]);
                }
                res.push_back(ans);
                ans = "";
                mini = nums[i];
            }
        }

        if (mini == nums.back())
        {
            res.push_back(to_string(mini));
        }
        else
        {
            res.push_back(to_string(mini) + "->" + to_string(nums.back()));
        }

        return res;
    }
};
