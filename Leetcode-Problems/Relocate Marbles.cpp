class Solution
{
public:
    vector<int> relocateMarbles(vector<int> &nums, vector<int> &moveFrom,
                                vector<int> &moveTo)
    {
        set<int> st(nums.begin(), nums.end());
        for (int i = 0; i < moveFrom.size(); i++)
        {
            st.erase(moveFrom[i]);
            st.insert(moveTo[i]);
        }
        vector<int> ans(st.begin(), st.end());
        return ans;
    }
};