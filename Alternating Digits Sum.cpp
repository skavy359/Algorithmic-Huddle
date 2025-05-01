class Solution
{
public:
    int alternateDigitSum(int n)
    {
        int ans = 0;
        string temp = to_string(n);
        for (int i = 0; i < temp.length(); i++)
        {
            if (i % 2 == 0)
            {
                ans += (temp[i] - '0');
            }
            else
            {
                ans -= (temp[i] - '0');
            }
        }
        return ans;
    }
};