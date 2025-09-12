class Solution
{
public:
    int minimumOperations(vector<int> &nums)
    {
        unordered_set<int> st;
        int ans = 0;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            if (st.count(nums[i]))
            {
                ans = (i + 3) / 3;
                break;
            }
            else
                st.insert(nums[i]);
        }
        return ans;
    }
};