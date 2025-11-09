class Solution
{
public:
    int minimumDistance(vector<int> &nums)
    {
        int ans = INT_MAX;
        bool found = false;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                for (int k = j + 1; k < nums.size(); k++)
                {
                    if (nums[i] == nums[j] && nums[j] == nums[k])
                    {
                        found = true;
                        ans = min(ans, abs(i - j) + abs(j - k) + abs(k - i));
                    }
                }
            }
        }
        if (found)
            return ans;
        return -1;
    }
};
©leetcode