class Solution
{
public:
    vector<int> intersection(vector<vector<int>> &nums)
    {
        vector<int> ans;
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums[i].size(); j++)
            {
                mp[nums[i][j]]++;
            }
        }
        for (auto i : mp)
        {
            if (i.second == nums.size())
            {
                ans.push_back(i.first);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};