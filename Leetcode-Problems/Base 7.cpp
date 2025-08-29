class Solution
{
public:
    string convertToBase7(int num)
    {
        string ans = "";
        if (num == 0)
            return "0";
        int temp = abs(num);
        while (temp > 0)
        {
            int rem = temp % 7;
            ans += to_string(rem);
            temp /= 7;
        }
        if (num < 0)
            ans += "-";
        reverse(ans.begin(), ans.end());
        return ans;
    }
};