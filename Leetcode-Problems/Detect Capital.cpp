class Solution
{
public:
    bool detectCapitalUse(string word)
    {
        int count = 0;
        for (int i = 0; i < word.size(); i++)
        {
            if (isupper(word[i]))
            {
                count++;
            }
        }
        if (count == 1)
        {
            if (isupper(word[0]))
            {
                return true;
            }
        }
        else if (count == word.size())
        {
            return true;
        }
        else if (count == 0)
        {
            return true;
        }
        return false;
    }
};