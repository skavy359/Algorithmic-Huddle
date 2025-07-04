class Solution
{
public:
    bool isVowel(char c)
    {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return true;
        return false;
    }

    string reverseVowels(string s)
    {
        int n = s.length();
        int i = 0, j = n - 1;
        while (i < j)
        {
            if (isVowel(s[i]))
            {
                if (isVowel(s[j]))
                {
                    swap(s[i], s[j]);
                    i++;
                    j--;
                }
                else
                {
                    j--;
                }
            }
            else
            {
                i++;
            }
        }
        return s;
    }
};