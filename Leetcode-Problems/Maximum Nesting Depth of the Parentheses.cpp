class Solution
{
public:
    int maxDepth(string s)
    {
        int ans = 0;
        int temp = 0;
        for (char c : s)
        {
            if (c == '(')
                temp++;
            else if (c == ')')
            {
                ans = max(ans, temp);
                temp--;
            }
        }
        ans = max(ans, temp);
        return ans;
    }
};