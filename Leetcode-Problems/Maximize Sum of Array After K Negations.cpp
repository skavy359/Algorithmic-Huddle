class Solution
{
public:
    int largestSumAfterKNegations(vector<int> &nums, int k)
    {
        priority_queue<int, vector<int>, greater<int>> pq(nums.begin(),
                                                          nums.end());
        int ans = 0;
        while (k--)
        {
            int temp = pq.top();
            pq.pop();
            if (temp == 0)
                pq.push(temp);
            else
            {
                temp = -temp;
                pq.push(temp);
            }
        }
        while (!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
        return ans;
    }
};