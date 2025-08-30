class Solution
{
public:
    bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
    {
        int i = 0, j = 0;
        stack<int> st;
        for (int i : pushed)
        {
            st.push(i);
            while (!st.empty() && st.top() == popped[j])
            {
                st.pop();
                j++;
            }
        }
        if (st.empty())
            return true;
        return false;
    }
};