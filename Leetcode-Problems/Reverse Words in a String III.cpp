class Solution
{
public:
    string reverseWords(string s)
    {
        string temp = "";
        string ans = "";
        int i = 0;
        while (i < s.length())
        {
            if (s[i] != ' ')
            {
                temp += s[i];
                i++;
            }
            else
            {
                reverse(temp.begin(), temp.end());
                ans += temp;
                ans += ' ';
                temp = "";
                i++;
            }
        }
        if (!temp.empty())
        {
            reverse(temp.begin(), temp.end());
            ans += temp;
        }
        return ans;
    }
};