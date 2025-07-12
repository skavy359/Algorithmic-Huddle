class Solution
{
public:
    bool isCovered(vector<vector<int>> &ranges, int left, int right)
    {
        vector<int> arr(51, 0);
        for (int i = 0; i < ranges.size(); i++)
        {
            for (int j = ranges[i][0]; j <= ranges[i][1]; j++)
            {
                arr[j] = 1;
            }
        }
        for (int i = left; i <= right; i++)
        {
            if (arr[i] == 0)
                return false;
        }
        return true;
    }
};