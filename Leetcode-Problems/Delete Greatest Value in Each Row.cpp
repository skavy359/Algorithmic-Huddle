class Solution
{
public:
    int deleteGreatestValue(vector<vector<int>> &grid)
    {
        for (auto &i : grid)
        {
            sort(i.rbegin(), i.rend());
        }
        int ans = 0;
        for (int i = 0; i < grid[0].size(); i++)
        {
            int temp = 0;
            for (int j = 0; j < grid.size(); j++)
            {
                temp = max(temp, grid[j][i]);
            }
            ans += temp;
        }
        return ans;
    }
};