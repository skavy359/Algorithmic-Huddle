class Solution
{
public:
    bool isPalindrome(string s)
    {
        string ans = "";
        for (char c : s)
        {
            c = tolower(c);
            if (isalnum(c))
            {
                ans += c;
            }
        }
        for (int i = 0; i < ans.length() / 2; i++)
        {
            if (ans[i] != ans[ans.length() - 1 - i])
                return false;
        }
        return true;
    }
};