class Solution
{
public:
    int twoCitySchedCost(vector<vector<int>> &costs)
    {
        vector<vector<int>> diff;
        int j = 0;
        for (auto i : costs)
        {
            diff.push_back({i[0] - i[1], j});
            j++;
        }
        sort(diff.rbegin(), diff.rend());
        int ans = 0;
        int b = costs.size() / 2;
        for (auto i : diff)
        {
            if (b > 0)
            {
                ans += costs[i[1]][1];
            }
            else
            {
                ans += costs[i[1]][0];
            }
            b--;
        }
        return ans;
    }
};