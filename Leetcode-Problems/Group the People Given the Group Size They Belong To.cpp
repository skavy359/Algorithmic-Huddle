class Solution
{
public:
    vector<vector<int>> groupThePeople(vector<int> &groupSizes)
    {
        map<int, vector<int>> mp;
        vector<vector<int>> ans;
        for (int i = 0; i < groupSizes.size(); i++)
        {
            int s = groupSizes[i];
            mp[groupSizes[i]].push_back(i);

            if (mp[groupSizes[i]].size() == s)
            {
                ans.push_back(mp[s]);
                mp[s].clear();
            }
        }
        return ans;
    }
};