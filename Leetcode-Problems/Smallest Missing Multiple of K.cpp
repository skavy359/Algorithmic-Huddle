class Solution
{
public:
    int missingMultiple(vector<int> &nums, int k)
    {
        set<int> st;
        for (int i : nums)
        {
            if (i % k == 0)
            {
                st.insert(i);
            }
        }
        int i = k;
        while (true)
        {
            if (!st.count(i))
                return i;
            i += k;
        }
        return 1;
    }
};