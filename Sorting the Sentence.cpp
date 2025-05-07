class Solution
{
public:
    string sortSentence(string s)
    {
        vector<string> words(10);
        string temp = "";

        for (int i = 0; i <= s.length(); i++)
        {
            if (i == s.length() || s[i] == ' ')
            {
                int index = temp.back() - '0';
                temp.pop_back();
                words[index] = temp;
                temp = "";
            }
            else
            {
                temp += s[i];
            }
        }

        string ans = "";
        for (int i = 1; i < 10; i++)
        {
            if (words[i] != "")
            {
                ans += words[i] + " ";
            }
        }

        if (!ans.empty())
            ans.pop_back();
        return ans;
    }
};
