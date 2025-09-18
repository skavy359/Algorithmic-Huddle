class Solution
{
public:
    int kthSmallest(vector<int> &arr, int k)
    {
        // code here
        priority_queue<int, vector<int>, greater<int>> pq(arr.begin(), arr.end());
        int ans = 0;
        while (k--)
        {
            ans = pq.top();
            pq.pop();
        }
        return ans;
    }
};