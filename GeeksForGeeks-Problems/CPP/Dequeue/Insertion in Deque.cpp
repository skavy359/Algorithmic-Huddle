class Solution
{
public:
    deque<int> dqInsertion(vector<int> &arr)
    {
        // code here
        deque<int> dq;
        for (int i : arr)
            dq.push_back(i);
        return dq;
    }
};