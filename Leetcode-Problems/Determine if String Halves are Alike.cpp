class Solution
{
public:
    bool isVowel(char c)
    {
        if (c == 'a' || c == 'e' || c == 'o' || c == 'i' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            return true;
        }
        return false;
    }

    bool halvesAreAlike(string s)
    {
        int first = 0, second = 0;
        for (int i = 0; i < s.length() / 2; i++)
        {
            if (isVowel(s[i]))
            {
                first++;
            }
        }
        for (int i = s.length() / 2; i < s.length(); i++)
        {
            if (isVowel(s[i]))
            {
                second++;
            }
        }
        if (first == second)
            return true;
        return false;
    }
};