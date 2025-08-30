class Solution
{
public:
    int longestPalindrome(string s)
    {
        int arr[52] = {0};
        for (char c : s)
        {
            if (c >= 'A' && c <= 'Z')
                arr[c - 'A']++;
            else if (c >= 'a' && c <= 'z')
                arr[26 + (c - 'a')]++;
        }

        int ans = 0;
        bool flag = false;
        for (int i : arr)
        {
            if (i % 2 == 0)
                ans += i;
            if (i % 2 != 0)
            {
                ans += i - 1;
                if (!flag)
                {
                    ans += 1;
                    flag = true;
                }
            }
        }
        return ans;
    }
};