class Solution
{
public:
    int countMajoritySubarrays(vector<int> &nums, int target)
    {
        vector<int> arr(nums.size());
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                arr[i] = 1;
            }
            else
                arr[i] = -1;
        }
        vector<int> pref(nums.size() + 1, 0);
        for (int i = 0; i < nums.size(); i++)
        {
            pref[i + 1] = pref[i] + arr[i];
        }
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i; j < nums.size(); j++)
            {
                int temp = pref[j + 1] - pref[i];
                if (temp > 0)
                    count++;
            }
        }
        return count;
    }
};
©leetcode