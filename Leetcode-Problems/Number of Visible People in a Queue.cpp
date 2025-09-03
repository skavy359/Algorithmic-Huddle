class Solution
{
public:
    vector<int> canSeePersonsCount(vector<int> &heights)
    {
        stack<int> st;
        vector<int> ans(heights.size());
        for (int i = heights.size() - 1; i >= 0; i--)
        {
            while (!st.empty() && heights[i] > st.top())
            {
                st.pop();
                ans[i]++;
            }
            if (!st.empty())
            {
                ans[i]++;
            }
            st.push(heights[i]);
        }
        return ans;
    }
};