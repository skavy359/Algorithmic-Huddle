class Solution
{
public:
    int maxCount(vector<int> &banned, int n, int maxSum)
    {
        int ans = 0, sum = 0;
        unordered_set<int> ban(banned.begin(), banned.end());
        for (int i = 1; i <= n; i++)
        {
            if (!ban.count(i))
            {
                sum += i;
                if (sum <= maxSum)
                {
                    ans++;
                }
            }
            if (sum > maxSum)
                break;
        }
        return ans;
    }
};