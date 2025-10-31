class Solution
{
public:
    int findLongestChain(vector<vector<int>> &pairs)
    {
        sort(pairs.begin(), pairs.end(), [&](auto a, auto b)
             {
            if (b[1] == a[1]) {
                return a[0] < b[0];
            }
            return a[1] < b[1]; });

        int ans = 1;
        int prev = pairs[0][1];
        for (int i = 1; i < pairs.size(); i++)
        {
            int left = pairs[i][0];
            int right = pairs[i][1];
            if (left > prev)
            {
                ans++;
                prev = right;
            }
        }
        return ans;
    }
};