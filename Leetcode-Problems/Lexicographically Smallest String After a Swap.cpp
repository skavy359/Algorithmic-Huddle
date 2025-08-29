class Solution
{
public:
    string getSmallestString(string s)
    {
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] > s[i + 1])
            {
                int l = s[i] - '0';
                int r = s[i + 1] - '0';
                if (l % 2 == r % 2)
                {
                    swap(s[i], s[i + 1]);
                    break;
                }
            }
        }
        return s;
    }
};