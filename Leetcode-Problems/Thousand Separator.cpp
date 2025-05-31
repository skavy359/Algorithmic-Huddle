class Solution
{
public:
    string thousandSeparator(int n)
    {
        if (n == 0)
            return "0";
        string ans = "";
        int i = 0;
        while (n > 0)
        {
            if (i == 3)
            {
                ans += '.';
                i = 0;
            }
            int rem = n % 10;
            ans += to_string(rem);
            n /= 10;
            i++;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};