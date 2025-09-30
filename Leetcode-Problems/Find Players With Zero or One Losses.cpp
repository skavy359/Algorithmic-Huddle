class Solution
{
public:
    vector<vector<int>> findWinners(vector<vector<int>> &matches)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < matches.size(); i++)
        {
            if (!mp.count(matches[i][0]))
            {
                mp[matches[i][0]] = 0;
            }
            mp[matches[i][1]]++;
        }
        vector<vector<int>> ans(2);
        for (auto i : mp)
        {
            if (i.second == 1)
            {
                ans[1].push_back(i.first);
            }
            else if (i.second == 0)
            {
                ans[0].push_back(i.first);
            }
        }
        for (auto &r : ans)
        {
            sort(r.begin(), r.end());
        }
        return ans;
    }
};