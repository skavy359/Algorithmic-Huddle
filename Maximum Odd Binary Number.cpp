class Solution
{
public:
    string maximumOddBinaryNumber(string s)
    {
        int zero = 0, ones = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
                zero++;
            else
                ones++;
        }
        string ans = "";
        while (ones > 1)
        {
            ans += '1';
            ones--;
        }
        while (zero--)
        {
            ans += '0';
        }
        ans += '1';
        return ans;
    }
};