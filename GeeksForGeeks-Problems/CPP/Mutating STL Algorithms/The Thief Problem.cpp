// User function Template for C++

class Solution
{
public:
    int getMaxVal(vector<int> arr, int n, int k)
    {
        // code here
        priority_queue<int> pq(arr.begin(), arr.end());
        int sum = 0;
        while (k--)
        {
            sum += pq.top();
            pq.pop();
        }
        return sum;
    }
};