class Solution
{
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>> &logs, int k)
    {
        vector<int> ans(k, 0);
        unordered_map<int, set<int>> mp;
        for (int i = 0; i < logs.size(); i++)
        {
            int id = logs[i][0];
            int time = logs[i][1];
            mp[id].insert(time);
        }
        for (auto i : mp)
        {
            ans[i.second.size() - 1]++;
        }
        return ans;
    }
};