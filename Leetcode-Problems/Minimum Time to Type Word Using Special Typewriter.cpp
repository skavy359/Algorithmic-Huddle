class Solution
{
public:
    int minTimeToType(string word)
    {
        int ans = word.length();
        char ch = 'a';
        for (int i = 0; i < word.length(); i++)
        {
            ans += min(abs(word[i] - ch), 26 - abs(word[i] - ch));
            ch = word[i];
        }
        return ans;
    }
};