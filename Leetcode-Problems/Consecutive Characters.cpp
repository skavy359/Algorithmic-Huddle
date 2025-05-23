class Solution
{
public:
    int maxPower(string s)
    {
        if (s.length() <= 1)
            return s.length();
        int ans = 0, temp = 1;
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == s[i + 1])
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