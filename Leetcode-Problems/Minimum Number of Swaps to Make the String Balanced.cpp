class Solution
{
public:
    int minSwaps(string s)
    {
        int open = 0, close = 0;
        int ans = 0;
        int i = 0, j = s.length() - 1;
        while (i < j)
        {
            if (s[i] == '[')
                open++;
            if (s[i] == ']')
                close++;
            if (close > open)
            {
                ans++;
                j--;
                open++;
                close--;
            }
            i++;
        }
        return ans;
    }
};

// Efficient Solution
class Solution
{
public:
    int minSwaps(string s)
    {
        int ans = 0;
        for (char c : s)
        {
            if (c == '[')
                ans++;
            else
            {
                if (ans > 0)
                {
                    ans--;
                }
            }
        }
        return (ans + 1) / 2;
    }
};