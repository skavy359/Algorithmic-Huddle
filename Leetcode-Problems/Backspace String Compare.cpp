class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        string word1 = "", word2 = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (i == 0 && s[i] != '#')
                word1 += s[0];
            else if (s[i] == '#')
            {
                if (!word1.empty())
                    word1.pop_back();
                else
                    continue;
            }
            else
                word1 += s[i];
        }
        for (int i = 0; i < t.length(); i++)
        {
            if (i == 0 && t[i] != '#')
                word2 += t[0];
            else if (t[i] == '#')
            {
                if (!word2.empty())
                    word2.pop_back();
                else
                    continue;
            }
            else
                word2 += t[i];
        }
        if (word1 == word2)
            return true;
        return false;
    }
};