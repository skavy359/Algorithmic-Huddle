class Solution
{
public:
    int maximumProduct(vector<int> &nums, int k)
    {
        priority_queue<int, vector<int>, greater<int>> pq(nums.begin(),
                                                          nums.end());
        while (k--)
        {
            int temp = pq.top();
            pq.pop();
            pq.push(temp + 1);
        }
        long long product = 1;
        while (!pq.empty())
        {
            product = (product * pq.top()) % 1000000007;
            pq.pop();
        }
        return (int)product;
    }
};