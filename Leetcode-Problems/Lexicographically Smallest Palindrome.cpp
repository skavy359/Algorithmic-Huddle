class Solution
{
public:
    string makeSmallestPalindrome(string s)
    {
        int n = s.length();
        int l = 0, r = n - 1;
        while (l < r)
        {
            if (s[l] == s[r])
            {
                l++;
                r--;
            }
            else
            {
                if (s[l] > s[r])
                {
                    s[l] = s[r];
                }
                else if (s[l] < s[r])
                {
                    s[r] = s[l];
                }
                l++;
                r--;
            }
        }
        return s;
    }
};

// ANOTHER SOLUTION METHOD
class Solution
{
public:
    string makeSmallestPalindrome(string s)
    {
        for (int i = 0; i < s.length() / 2; i++)
        {
            if (s[i] < s[s.length() - 1 - i])
                s[s.length() - 1 - i] = s[i];
            else if (s[i] > s[s.length() - 1 - i])
                s[i] = s[s.length() - 1 - i];
        }
        return s;
    }
};