class Solution
{
public:
    int returnToBoundaryCount(vector<int> &nums)
    {
        int sum = 0;
        int ans = 0;
        for (int i : nums)
        {
            sum += i;
            if (sum == 0)
                ans++;
        }
        return ans;
    }
};