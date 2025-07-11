class Solution
{
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>> &grid)
    {
        int n = grid.size();
        vector<int> arr(n * n + 1, 0);
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[i].size(); j++)
            {
                int temp = grid[i][j];
                arr[temp] += 1;
            }
        }
        int a = 0, b = 0;
        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i] == 0)
            {
                b = i;
            }
            else if (arr[i] == 2)
            {
                a = i;
            }
        }
        return {a, b};
    }
};