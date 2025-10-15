class Solution
{
public:
    vector<int> minCosts(vector<int> &cost)
    {
        vector<int> ans;
        int mini = cost[0];
        ans.push_back(mini);
        for (int i = 1; i < cost.size(); i++)
        {
            if (cost[i] < mini)
            {
                mini = cost[i];
            }
            ans.push_back(mini);
        }
        return ans;
    }
};