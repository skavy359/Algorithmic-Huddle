class Solution
{
public:
    long long maxKelements(vector<int> &nums, int k)
    {
        priority_queue<int> pq;
        for (int i : nums)
            pq.push(i);
        long long total = 0;
        while (k > 0)
        {
            int top = pq.top();
            pq.pop();
            total += top;
            k--;
            pq.push(static_cast<int>(ceil(static_cast<double>(top) / 3.0)));
        }
        return total;
    }
};