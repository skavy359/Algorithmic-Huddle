class Solution
{
public:
    int minOperations(vector<int> &nums, vector<int> &numsDivide)
    {
        int gc = numsDivide[0];
        for (int i = 1; i < numsDivide.size(); i++)
        {
            gc = __gcd(gc, numsDivide[i]);
        }
        int ans = 0;
        sort(nums.begin(), nums.end());
        for (int i : nums)
        {
            if (gc % i == 0)
            {
                return ans;
            }
            ans++;
        }
        return -1;
    }
};