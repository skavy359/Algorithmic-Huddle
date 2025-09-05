class Solution
{
public:
    int maxWidthOfVerticalArea(vector<vector<int>> &points)
    {
        vector<int> x;
        for (int i = 0; i < points.size(); i++)
        {
            x.push_back(points[i][0]);
        }
        sort(x.begin(), x.end());
        int ans = INT_MIN;
        for (int i = 0; i < x.size() - 1; i++)
        {
            ans = max(ans, x[i + 1] - x[i]);
        }
        return ans;
    }
};