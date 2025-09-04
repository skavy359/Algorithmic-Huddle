class Solution
{
public:
    int halveArray(vector<int> &nums)
    {
        priority_queue<double> pq;
        long long total = 0;
        for (int i : nums)
        {
            pq.push(i);
            total += i;
        }
        double after_sum = total;
        int ans = 0;
        while (after_sum > total / 2.0)
        {
            double top = pq.top();
            pq.pop();
            after_sum -= top / 2.0;
            pq.push(top / 2.0);
            ans++;
        }
        return ans;
    }
};
