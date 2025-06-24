class Solution
{
public:
    int minimum_vertical_sum(vector<vector<int>> &V, int n)
    {
        int minVerticalSum = INT_MAX;
        int maxLen = 0;
        for (const auto &vec : V)
        {
            maxLen = max(maxLen, (int)vec.size());
        }

        for (int i = 0; i < maxLen; ++i)
        {
            int sum = 0;
            for (const auto &vec : V)
            {
                if (i < vec.size())
                {
                    sum += vec[i];
                }
            }
            minVerticalSum = min(minVerticalSum, sum);
        }
        return minVerticalSum;
    }
};