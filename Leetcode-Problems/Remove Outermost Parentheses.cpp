class Solution
{
public:
    string removeOuterParentheses(string s)
    {
        string ans = "";
        int flag = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                if (flag > 0)
                {
                    ans += s[i];
                }
                flag++;
            }
            else
            {
                flag--;
                if (flag > 0)
                {
                    ans += s[i];
                }
            }
        }
        return ans;
    }
};