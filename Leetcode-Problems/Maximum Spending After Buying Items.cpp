class Solution
{
public:
    long long maxSpending(vector<vector<int>> &values)
    {
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < values.size(); i++)
        {
            for (int j = 0; j < values[i].size(); j++)
            {
                pq.push(values[i][j]);
            }
        }
        long long ans = 0;
        long long d = 1;
        while (!pq.empty())
        {
            ans += (pq.top() * d);
            d++;
            pq.pop();
        }
        return ans;
    }
};