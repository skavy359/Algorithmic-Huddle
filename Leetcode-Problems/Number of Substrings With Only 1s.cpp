class Solution
{
public:
    int numSub(string s)
    {
        long long ones = 0;
        long long ans = 0;
        long long MOD = 1000000007;
        for (char c : s)
        {
            if (c == '1')
            {
                ones++;
            }
            else
            {
                ans = (ans + (ones * (ones + 1) / 2) % MOD) % MOD;
                ones = 0;
            }
        }
        ans = (ans + (ones * (ones + 1) / 2) % MOD) % MOD;
        return ans;
    }
};