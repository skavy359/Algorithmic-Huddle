class Solution
{
public:
    bool isValid(string word)
    {
        if (word.length() < 3)
            return false;
        bool vowel = false, consonant = false;
        for (char c : word)
        {
            if (!isalnum(c))
                return false;
            if (isalpha(c))
            {
                c = tolower(c);
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                    vowel = true;
                else
                    consonant = true;
            }
        }
        if (vowel && consonant)
            return true;
        return false;
    }
};