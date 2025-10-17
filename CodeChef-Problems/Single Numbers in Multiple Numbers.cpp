class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        // write your code here
        int ans = 0;
        for (int i : nums)
        {
            ans ^= i;
        }
        return ans;
    }
};