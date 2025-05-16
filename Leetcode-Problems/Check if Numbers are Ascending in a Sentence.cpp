class Solution
{
public:
    bool areNumbersAscending(string s)
    {
        int temp = 0;
        int i = 0;
        while (i < s.length())
        {
            if (isdigit(s[i]))
            {
                int ans = 0;
                while (i < s.length() && isdigit(s[i]))
                {
                    ans = ans * 10 + (s[i] - '0');
                    i++;
                }
                if (ans <= temp)
                    return false;
                temp = ans;
            }
            else
            {
                i++;
            }
        }
        return true;
    }
};