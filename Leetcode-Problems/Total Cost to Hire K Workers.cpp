class Solution
{
public:
    long long totalCost(vector<int> &costs, int k, int candidates)
    {
        priority_queue<int, vector<int>, greater<int>> left, right;
        int i = 0, j = costs.size() - 1;

        for (int idx = 0; idx < candidates && i <= j; idx++)
        {
            left.push(costs[i]);
            i++;
        }
        for (int idx = 0; idx < candidates && j >= i; idx++)
        {
            right.push(costs[j]);
            j--;
        }

        long long ans = 0;
        while (k--)
        {
            int lt = left.empty() ? INT_MAX : left.top();
            int rt = right.empty() ? INT_MAX : right.top();

            if (lt <= rt)
            {
                ans += lt;
                left.pop();
                if (i <= j)
                {
                    left.push(costs[i]);
                    i++;
                }
            }
            else
            {
                ans += rt;
                right.pop();
                if (i <= j)
                {
                    right.push(costs[j]);
                    j--;
                }
            }
        }
        return ans;
    }
};
