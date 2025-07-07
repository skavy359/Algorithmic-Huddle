class Solution
{
public:
    vector<int> twoOutOfThree(vector<int> &nums1, vector<int> &nums2,
                              vector<int> &nums3)
    {
        set<int> st1(nums1.begin(), nums1.end());
        set<int> st2(nums2.begin(), nums2.end());
        set<int> st3;
        for (int i : nums2)
        {
            if (st1.contains(i))
            {
                st3.insert(i);
            }
        }
        for (int i : nums3)
        {
            if (st1.contains(i))
            {
                st3.insert(i);
            }
        }
        for (int i : nums3)
        {
            if (st2.contains(i))
            {
                st3.insert(i);
            }
        }
        vector<int> ans(st3.begin(), st3.end());
        return ans;
    }
};