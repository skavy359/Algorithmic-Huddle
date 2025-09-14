class Solution
{
public:
    int winningPlayerCount(int n, vector<vector<int>> &pick)
    {
        unordered_map<int, unordered_map<int, int>> mp;
        int ans = 0;
        for (int i = 0; i < pick.size(); i++)
        {
            int player = pick[i][0];
            int color = pick[i][1];
            mp[player][color]++;
        }
        for (int i = 0; i < n; i++)
        {
            bool flag = false;
            for (auto j : mp[i])
            {
                if (j.second >= i + 1)
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
                ans++;
        }
        return ans;
    }
};