class Solution
{
public:
    void eraseAt(deque<int> &deq, int x)
    {
        // code here
        if (x >= 0 && x < deq.size())
        {
            deq.erase(deq.begin() + x);
        }
    }

    void eraseInRange(deque<int> &deq, int start, int end)
    {
        if (start < end && start >= 0 && end < deq.size())
        {
            deq.erase(deq.begin() + start, deq.begin() + end);
        }
    }

    void eraseAll(deque<int> &deq)
    {
        // code here
        deq.clear();
    }
};