class Solution
{
public:
    int findMaxK(vector<int> &nums)
    {
        int ans = -1;
        unordered_set<int> freq(nums.begin(), nums.end());
        for (int i : freq)
        {
            if (freq.find(-i) != freq.end())
            {
                ans = max(ans, i);
            }
        }
        return ans;
    }
};