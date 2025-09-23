class Solution
{
public:
    void printDeque(deque<int> &dq)
    {
        // code here
        while (!dq.empty())
        {
            cout << dq.front() << " ";
            dq.pop_front();
        }
        cout << endl;
    }
};