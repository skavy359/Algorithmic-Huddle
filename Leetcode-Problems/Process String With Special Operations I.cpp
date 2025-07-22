class Solution
{
public:
    string processStr(string s)
    {
        string res = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (isalpha(s[i]))
                res += s[i];
            else if (s[i] == '*' && res.length() > 0)
                res.pop_back();
            else if (s[i] == '#')
                res += res;
            else if (s[i] == '%')
                reverse(res.begin(), res.end());
        }
        return res;
    }
};