class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int ans = 0;
        for (int i : nums)
        {
            if (i != ans)
            {
                break;
            }
            ans++;
        }
        return ans;
    }
};