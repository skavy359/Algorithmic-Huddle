// User function Template for C++

class Solution
{
public:
    int maxToys(vector<int> &arr, int k)
    {
        int ans = 0;
        priority_queue<int, vector<int>, greater<int>> pq(arr.begin(), arr.end());
        while (pq.top() <= k)
        {
            ans++;
            k -= pq.top();
            pq.pop();
        }
        return ans;
    }
};