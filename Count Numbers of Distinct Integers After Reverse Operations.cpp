class Solution
{
public:
    int rev(int n)
    {
        int res = 0;
        while (n > 0)
        {
            int rem = n % 10;
            res = res * 10 + rem;
            n /= 10;
        }
        return res;
    }
    int countDistinctIntegers(vector<int> &nums)
    {
        set<int> ans(nums.begin(), nums.end());
        for (auto num : nums)
        {
            ans.insert(rev(num));
        }
        return ans.size();
    }
};