class Solution
{
public:
    int maximumScore(int a, int b, int c)
    {
        priority_queue<int> pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        int ans = 0;
        while (pq.size() > 1)
        {
            ans++;
            int fir = pq.top() - 1;
            pq.pop();
            int sec = pq.top() - 1;
            pq.pop();
            if (fir != 0)
                pq.push(fir);
            if (sec != 0)
                pq.push(sec);
        }
        return ans;
    }
};

// Another Solution
class Solution
{
public:
    int maximumScore(int a, int b, int c)
    {
        int total = a + b + c;
        int maxPile = max({a, b, c});
        return min(total - maxPile, total / 2);
    }
};