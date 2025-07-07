class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        set<int> st1, st2;
        for (int i : nums1)
        {
            st1.insert(i);
        }
        for (int i : nums2)
        {
            if (st1.contains(i))
            {
                st2.insert(i);
            }
        }
        vector<int> ans(st2.begin(), st2.end());
        return ans;
    }
};