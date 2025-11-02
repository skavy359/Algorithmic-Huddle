class Solution
{
public:
    long long maxProduct(vector<int> &nums)
    {
        for (int &i : nums)
            i = abs(i);
        sort(nums.rbegin(), nums.rend());
        long long ans = 1LL * nums[0] * nums[1] * 100000;
        return ans;
    }
};