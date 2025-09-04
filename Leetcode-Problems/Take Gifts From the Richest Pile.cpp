class Solution
{
public:
    long long pickGifts(vector<int> &gifts, int k)
    {
        priority_queue<int> pq;
        for (int i : gifts)
        {
            pq.push(i);
        }
        long long ans = 0;
        while (k > 0)
        {
            int ans = pq.top();
            pq.pop();
            k--;
            pq.push(static_cast<int>(sqrt(ans)));
        }
        while (!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
        return ans;
    }
};