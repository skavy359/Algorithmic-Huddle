class Solution
{
public:
    int maxOperations(string s)
    {
        int count = 0, ones = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                ones++;
                if (s[i + 1] == '0')
                {
                    count += ones;
                }
            }
        }
        return count;
    }
};