class Solution
{
public:
    vector<int> bestTower(vector<vector<int>> &towers, vector<int> &center,
                          int radius)
    {
        int cx = center[0], cy = center[1];
        int maxi = -1;
        vector<int> ans = {INT_MAX, INT_MAX};
        for (int i = 0; i < towers.size(); i++)
        {
            if (abs(towers[i][0] - cx) + abs(towers[i][1] - cy) <= radius)
            {
                if (towers[i][2] > maxi)
                {
                    maxi = towers[i][2];
                    ans = {towers[i][0], towers[i][1]};
                }
                else if (towers[i][2] == maxi)
                {
                    ans = min(ans, {towers[i][0], towers[i][1]});
                }
            }
        }
        if (ans[0] == INT_MAX)
            return {-1, -1};
        return ans;
    }
};