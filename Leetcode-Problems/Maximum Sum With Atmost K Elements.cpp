class Solution
{
public:
    long long maxSum(vector<vector<int>> &grid, vector<int> &limits, int k)
    {
        for (auto &i : grid)
        {
            sort(i.rbegin(), i.rend());
        }
        long long ans = 0;
        priority_queue<int> pq;
        for (int i = 0; i < limits.size(); i++)
        {
            int j = 0;
            while (limits[i]--)
            {
                pq.push(grid[i][j]);
                j++;
            }
        }
        while (k--)
        {
            ans += pq.top();
            pq.pop();
        }
        return ans;
    }
};