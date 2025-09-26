class Solution
{
public:
    void rotateDeque(deque<int> &dq, int type, int k)
    {
        // code here
        if (type == 1)
        {
            while (k--)
            {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
        else
        {
            while (k--)
            {
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }
    }
};