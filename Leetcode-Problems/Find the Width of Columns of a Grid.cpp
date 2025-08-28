class Solution
{
public:
    int length(int x)
    {
        if (x == 0)
            return 1;
        int count = 0;
        if (x < 0)
        {
            count++;
            x = -x;
        }
        while (x)
        {
            count++;
            x /= 10;
        }
        return count;
    }

    vector<int> findColumnWidth(vector<vector<int>> &grid)
    {
        vector<int> ans;
        for (int i = 0; i < grid[0].size(); i++)
        {
            int res = 0;
            for (int j = 0; j < grid.size(); j++)
            {
                res = max(res, length(grid[j][i]));
            }
            ans.push_back(res);
        }
        return ans;
    }
};