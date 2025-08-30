class Solution
{
public:
    int titleToNumber(string columnTitle)
    {
        int ans = 0;
        int len = columnTitle.length() - 1;
        for (int i = 0; i < columnTitle.length(); i++)
        {
            ans = ans + (columnTitle[i] - 'A' + 1) * pow(26, len);
            len--;
        }
        return ans;
    }
};