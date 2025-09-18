class Solution
{
public:
    int minCost(vector<int> &arr)
    {
        // code here
        int ans = 0;
        priority_queue<int, vector<int>, greater<int>> pq(arr.begin(), arr.end());
        while (pq.size() > 1)
        {
            int fir = pq.top();
            pq.pop();
            int sec = pq.top();
            pq.pop();
            ans += fir + sec;
            pq.push(fir + sec);
        }
        return ans;
    }
};