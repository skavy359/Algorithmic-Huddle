class Solution
{
public:
    string greatestLetter(string s)
    {
        bool smallArr[26] = {false};
        bool largeArr[26] = {false};
        for (char c : s)
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
        string ans = "";
        for (int i = 25; i >= 0; i--)
        {
            if (smallArr[i] == true && largeArr[i] == true)
            {
                ans += ('A' + i);
                return ans;
            }
        }
        return ans;
    }
};