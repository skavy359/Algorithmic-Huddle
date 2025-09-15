class Solution
{
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>> &matrix)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            int maxi = INT_MIN;
            for (int i = 0; i < matrix.size(); i++)
            {
                maxi = max(maxi, matrix[i][j]);
            }
            for (int i = 0; i < matrix.size(); i++)
            {
                if (matrix[i][j] == -1)
                    matrix[i][j] = maxi;
            }
        }
        return matrix;
    }
};