class Solution
{
public:
    bool isVowel(char c)
    {
        if (c == 'a' || c == 'e' || c == 'o' || c == 'i' || c == 'u')
            return true;
        return false;
    }

    int vowelStrings(vector<string> &words, int left, int right)
    {
        int count = 0;
        for (int i = left; i <= right; i++)
        {
            int n = words[i].length();
            if (isVowel(words[i][0]) && isVowel(words[i][n - 1]))
            {
                count++;
            }
        }
        return count;
    }
};