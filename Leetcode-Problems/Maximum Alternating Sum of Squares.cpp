class Solution
{
public:
    long long maxAlternatingSum(vector<int> &nums)
    {
        for (int &i : nums)
        {
            i = abs(i);
        }
        sort(nums.begin(), nums.end());
        long long ans = 0;
        int l = 0, r = nums.size() - 1;
        while (l < r)
        {
            ans += (nums[r] * nums[r]) - (nums[l] * nums[l]);
            l++;
            r--;
        }
        if (l == r)
        {
            ans += nums[l] * nums[l];
        }
        return ans;
    }
};