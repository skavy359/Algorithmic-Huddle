class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        // SOLUTION-1
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        char ans;
        bool check = true;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != t[i])
            {
                check = false;
                ans = t[i];
                break;
            }
        }
        if (!check)
            return ans;
        else
            return t[t.length() - 1];

        // SOLUTION-2
        int temp1 = 0, temp2 = 0;
        for (char c : s)
        {
            temp1 += c - '0';
        }
        for (char c : t)
        {
            temp2 += c - '0';
        }
        return (temp2 - temp1) + '0';
    }
};
