class Solution
{
public:
    vector<int> resultsArray(vector<vector<int>> &queries, int k)
    {
        priority_queue<int> pq;
        vector<int> ans;
        for (int i = 0; i < queries.size(); i++)
        {
            int x = queries[i][0];
            int y = queries[i][1];
            pq.push(abs(x) + abs(y));
            if (pq.size() < k)
                ans.push_back(-1);
            else
            {
                if (pq.size() > k)
                    pq.pop();
                ans.push_back(pq.top());
            }
        }
        return ans;
    }
};