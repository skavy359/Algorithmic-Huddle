class Solution
{
public:
    string reformatNumber(string number)
    {
        string digits = "";
        for (char c : number)
        {
            if (isdigit(c))
            {
                digits += c;
            }
        }
        string ans = "";
        int i = 0;
        int n = digits.length();
        while (n > 4)
        {
            ans += digits.substr(i, 3);
            ans += '-';
            i += 3;
            n -= 3;
        }
        if (n == 2)
        {
            ans += digits.substr(i, 2);
        }
        if (n == 3)
        {
            ans += digits.substr(i, 3);
        }
        else if (n == 4)
        {
            ans += digits.substr(i, 2);
            ans += "-";
            i += 2;
            ans += digits.substr(i, 2);
        }
        return ans;
    }
};