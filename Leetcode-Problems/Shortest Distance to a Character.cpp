class Solution
{
public:
    vector<int> shortestToChar(string s, char c)
    {
        int n = s.length();
        vector<int> ans(n, n);
        int prev = -n;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == c)
            {
                prev = i;
            }
            ans[i] = i - prev;
        }
        prev = n * 2;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == c)
            {
                prev = i;
            }
            ans[i] = min(ans[i], prev - i);
        }
        return ans;
    }
};