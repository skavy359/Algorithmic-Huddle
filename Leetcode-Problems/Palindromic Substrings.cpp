class Solution
{
public:
    int countSubstrings(string s)
    {
        int count = 0;
        int n = s.length();
        for (int i = 0; i < 2 * n - 1; i++)
        {
            int left = i / 2;
            int right = left + i % 2;
            while (left >= 0 && right < n && s[left] == s[right])
            {
                count++;
                left--;
                right++;
            }
        }
        return count;
    }
};