class Solution
{
public:
    vector<string> findRelativeRanks(vector<int> &score)
    {
        priority_queue<pair<int, int>> pq;
        vector<string> ans(score.size());
        for (int i = 0; i < score.size(); i++)
        {
            pq.push({score[i], i});
        }
        int val = 1;
        while (!pq.empty())
        {
            int index = pq.top().second;
            if (val == 1)
            {
                ans[index] = "Gold Medal";
            }
            else if (val == 2)
            {
                ans[index] = "Silver Medal";
            }
            else if (val == 3)
            {
                ans[index] = "Bronze Medal";
            }
            else
            {
                ans[index] = to_string(val);
            }
            val++;
            pq.pop();
        }
        return ans;
    }
};