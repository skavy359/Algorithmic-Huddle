class Solution
{
public:
    int numberOfSpecialChars(string word)
    {
        bool smallArr[26] = {false};
        bool largeArr[26] = {false};
        for (char c : word)
        {
            if (c >= 'a' && c <= 'z')
            {
                smallArr[c - 'a'] = true;
            }
            else if (c >= 'A' && c <= 'Z')
            {
                largeArr[c - 'A'] = true;
            }
        }
        int ans = 0;
        for (int i = 0; i < 26; i++)
        {
            if (smallArr[i] == true && largeArr[i] == true)
                ans++;
        }
        return ans;
    }
};