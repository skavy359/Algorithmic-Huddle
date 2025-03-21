class Solution
{
public:
    bool hasSameDigits(string s)
    {
        if (s.length() < 2)
            return false;
        int n = s.length();
        while (n > 2)
        {
            for (int i = 0; i < n - 1; i++)
            {
                int trial = ((int)(s[i] - '0') + (int)(s[i + 1] - '0')) % 10;
                s[i] = ((char)trial) + '0';
            }
            --n;
        }
        return s[0] == s[1];
    }
};