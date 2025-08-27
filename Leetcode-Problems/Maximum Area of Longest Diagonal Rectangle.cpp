class Solution
{
public:
    int areaOfMaxDiagonal(vector<vector<int>> &dimensions)
    {
        int ans = 0;
        int temp = INT_MIN;
        for (int i = 0; i < dimensions.size(); i++)
        {
            int length = dimensions[i][0], width = dimensions[i][1];
            if (length * length + width * width > temp)
            {
                temp = length * length + width * width;
                ans = length * width;
            }
            else if (length * length + width * width == temp)
            {
                ans = max(ans, length * width);
            }
        }
        return ans;
    }
};