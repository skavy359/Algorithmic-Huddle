class Solution
{
public:
    int minDeletion(vector<int> &nums)
    {
        stack<int> st;
        int count = 0;
        for (int i : nums)
        {
            if (!st.empty() && st.size() % 2 != 0)
            {
                if (i == st.top())
                {
                    count++;
                    continue;
                }
            }
            st.push(i);
        }
        if (st.size() % 2 != 0)
            count++;
        return count;
    }
};