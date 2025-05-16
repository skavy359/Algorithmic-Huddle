class Solution
{
public:
    bool checkLetters(string s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (isalpha(s[i]))
                return true;
        }
        return false;
    }
    int maximumValue(vector<string> &strs)
    {
        int ans = 0;
        for (int i = 0; i < strs.size(); i++)
        {
            if (checkLetters(strs[i]))
            {
                ans = max(ans, (int)strs[i].length());
            }
            else
            {
                ans = max(ans, stoi(strs[i]));
            }
        }
        return ans;
    }
};