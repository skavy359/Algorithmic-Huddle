class Solution
{
public:
    int countHomogenous(string s)
    {
        long long temp = 1;
        long long ans = 0;
        long long MOD = 1000000007;
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] == s[i - 1])
            {
                temp++;
            }
            else
            {
                ans = (ans + (temp * (temp + 1) / 2) % MOD) % MOD;
                temp = 1;
            }
        }
        ans = (ans + (temp * (temp + 1) / 2) % MOD) % MOD;
        return ans;
    }
};