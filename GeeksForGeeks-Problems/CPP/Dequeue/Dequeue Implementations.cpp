class Solution
{
public:
    void pb(deque<int> &dq, int x)
    {
        // code here
        dq.push_back(x);
    }

    void ppb(deque<int> &dq)
    {
        if (!dq.empty())
            dq.pop_back();
        // code here
    }

    int front_dq(deque<int> &dq)
    {
        // code here
        if (!dq.empty())
            return dq.front();
        return -1;
    }

    void pf(deque<int> &dq, int x)
    {
        // code here
        dq.push_front(x);
    }
};