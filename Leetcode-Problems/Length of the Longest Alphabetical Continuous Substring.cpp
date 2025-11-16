class Solution
{
public:
    int longestContinuousSubstring(string s)
    {
        long long temp = 1;
        long long ans = 0;
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] - 1 == s[i - 1])
            {
                temp++;
            }
            else
            {
                ans = max(ans, temp);
                temp = 1;
            }
        }
        ans = max(ans, temp);
        return ans;
    }
};