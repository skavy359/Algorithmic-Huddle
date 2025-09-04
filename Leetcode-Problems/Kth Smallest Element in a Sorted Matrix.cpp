class Solution
{
public:
    int kthSmallest(vector<vector<int>> &matrix, int k)
    {
        priority_queue<int, vector<int>, greater<int>> pq;
        for (auto i : matrix)
        {
            for (auto j : i)
            {
                pq.push(j);
            }
        }
        int ans = 0;
        while (k--)
        {
            ans = pq.top();
            pq.pop();
        }
        return ans;
    }
};