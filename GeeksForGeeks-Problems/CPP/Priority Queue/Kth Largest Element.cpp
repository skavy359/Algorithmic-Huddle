class Solution
{
public:
    // Function to return kth largest element from an array.
    int KthLargest(vector<int> &arr, int k)
    {
        // Your code here
        priority_queue<int> pq(arr.begin(), arr.end());
        int ans = 0;
        while (k--)
        {
            ans = pq.top();
            pq.pop();
        }
        return ans;
    }
};