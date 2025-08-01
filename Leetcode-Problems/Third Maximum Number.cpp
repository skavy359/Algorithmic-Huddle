class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        // set<int>st;
        // for(int i:nums){
        //     st.insert(i);
        // }
        // if(st.size()<3) return *--st.end();
        // else{
        //     auto it = st.end();
        //     --it;
        //     --it;
        //     --it;
        //     return *it;
        // }
        sort(nums.begin(), nums.end());
        vector<int> st;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i == 0 || nums[i] != nums[i - 1])
            {
                st.push_back(nums[i]);
            }
        }
        if (st.size() < 3)
            return st[st.size() - 1];
        return st[st.size() - 3];
    }
};