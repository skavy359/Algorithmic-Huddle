class Solution
{
public:
    int minZeroArray(vector<int> &nums, vector<vector<int>> &queries)
    {
        int n = nums.size(), sum = 0, k = 0;
        vector<int> count(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            while (sum + count[i] < nums[i])
            {
                if (k == queries.size())
                    return -1;
                int l = queries[k][0];
                int r = queries[k][1];
                int val = queries[k][2];
                k++;

                if (r < i)
                    continue;
                count[max(l, i)] += val;
                count[r + 1] -= val;
            }
            sum += count[i];
        }
        return k;
    }
};