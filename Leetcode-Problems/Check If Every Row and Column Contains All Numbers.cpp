class Solution
{
public:
    bool checkValid(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        for (int i = 0; i < n; i++)
        {
            vector<bool> arr1(n + 1, false), arr2(n + 1, false);
            for (int j = 0; j < n; j++)
            {
                if (arr1[matrix[i][j]] || arr2[matrix[j][i]])
                    return false;
                arr1[matrix[i][j]] = true;
                arr2[matrix[j][i]] = true;
            }
        }
        return true;
    }
};