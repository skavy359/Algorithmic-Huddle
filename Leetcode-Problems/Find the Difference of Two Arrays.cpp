class Solution
{
public:
    vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
    {
        set<int> st1(nums1.begin(), nums1.end());
        set<int> st2(nums2.begin(), nums2.end());

        vector<int> diff1, diff2;

        for (int i : st1)
        {
            if (!st2.contains(i))
            {
                diff1.push_back(i);
            }
        }
        for (int i : st2)
        {
            if (!st1.contains(i))
            {
                diff2.push_back(i);
            }
        }

        return {diff1, diff2};
    }
};
