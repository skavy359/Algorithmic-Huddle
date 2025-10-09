class Solution
{
public:
    int equalPairs(vector<vector<int>> &grid)
    {
        map<vector<int>, int> mp;
        for (auto v : grid)
            mp[v]++;
        int ans = 0;
        for (int j = 0; j < grid[0].size(); j++)
        {
            vector<int> arr;
            for (int i = 0; i < grid.size(); i++)
            {
                arr.push_back(grid[i][j]);
            }
            if (mp.count(arr))
                ans += mp[arr];
        }
        return ans;
    }
};