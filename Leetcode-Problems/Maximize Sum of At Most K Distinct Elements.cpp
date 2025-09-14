class Solution
{
public:
    vector<int> maxKDistinct(vector<int> &nums, int k)
    {
        set<int, greater<int>> st;
        for (int i : nums)
        {
            if (!st.count(i))
            {
                st.insert(i);
            }
        }
        vector<int> ans;
        int i = 0;
        for (auto it : st)
        {
            ans.push_back(it);
            k--;
            if (k == 0)
                break;
        }
        return ans;
    }
};