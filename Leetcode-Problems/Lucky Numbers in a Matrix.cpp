class Solution
{
public:
    vector<int> luckyNumbers(vector<vector<int>> &matrix)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < matrix.size(); i++)
        {
            int temp = INT_MAX;
            for (int j = 0; j < matrix[0].size(); j++)
            {
                temp = min(temp, matrix[i][j]);
            }
            mp[temp]++;
        }
        for (int j = 0; j < matrix[0].size(); j++)
        {
            int temp = INT_MIN;
            for (int i = 0; i < matrix.size(); i++)
            {
                temp = max(temp, matrix[i][j]);
            }
            mp[temp]++;
        }
        for (auto i : mp)
        {
            if (i.second == 2)
                return {i.first};
        }
        return {};
    }
};