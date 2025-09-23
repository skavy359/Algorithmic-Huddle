class Solution
{
public:
    int minOperations(vector<int> &nums, int k)
    {
        int x = 0, ans = 0;
        for (int i : nums)
            x ^= i;
        while (x > 0 || k > 0)
        {
            int bit_a = x & 1;
            int bit_b = k & 1;
            if (bit_a != bit_b)
                ans++;
            x >>= 1;
            k >>= 1;
        }
        return ans;
    }
};