class Solution
{
public:
    int hardestWorker(int n, vector<vector<int>> &logs)
    {
        int ans = logs[0][0];
        int temp = logs[0][1];
        for (int i = 1; i < logs.size(); i++)
        {
            int time = logs[i][1] - logs[i - 1][1];
            if (time > temp)
            {
                temp = time;
                ans = logs[i][0];
            }
            else if (time == temp)
            {
                ans = min(ans, logs[i][0]);
            }
        }
        return ans;
    }
};