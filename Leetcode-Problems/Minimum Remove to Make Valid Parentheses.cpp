class Solution
{
public:
    string minRemoveToMakeValid(string s)
    {
        string ans = "";
        int balance = 0;
        for (char &c : s)
        {
            if (c == '(')
                balance++;
            else if (c == ')')
            {
                if (balance == 0)
                    c = '#';
                else
                    balance--;
            }
        }
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (balance > 0 && s[i] == '(')
            {
                s[i] = '#';
                balance--;
            }
        }
        for (char c : s)
        {
            if (c != '#')
                ans += c;
        }
        return ans;
    }
};