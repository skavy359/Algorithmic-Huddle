class Solution
{
public:
    int lastStoneWeight(vector<int> &stones)
    {
        priority_queue<int> pq;
        for (int i : stones)
            pq.push(i);
        while (pq.size() > 1)
        {
            int top = pq.top();
            pq.pop();
            int second = pq.top();
            pq.pop();
            if (top == second)
                continue;
            pq.push(top - second);
        }
        if (pq.empty())
            return 0;
        return pq.top();
    }
};