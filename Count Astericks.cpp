class Solution
{
public:
    int countAsterisks(string s)
    {
        int ans = 0;
        bool flag = false;
        for (char ch : s)
        {
            if (ch == '|')
                flag = !flag;
            if (!flag && ch == '*')
                ans++;
        }
        return ans;
    }
};