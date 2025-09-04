class Solution
{
public:
    int minStoneSum(vector<int> &piles, int k)
    {
        priority_queue<int> pq;
        for (int i : piles)
        {
            pq.push(i);
        }
        int total = 0;
        while (k > 0)
        {
            int top = pq.top();
            int floor_half = top / 2;
            pq.pop();
            k--;
            pq.push(top - floor_half);
        }
        while (!pq.empty())
        {
            total += pq.top();
            pq.pop();
        }
        return total;
    }
};