class Solution
{
public:
    string addBinary(string a, string b)
    {
        string ans = "";
        int carry = 0;
        int len = max(a.length(), b.length());
        while (a.length() < len)
            a = "0" + a;
        while (b.length() < len)
            b = "0" + b;
        for (int i = len - 1; i >= 0; i--)
        {
            int sum = (a[i] - '0') + (b[i] - '0') + carry;
            ans += char((sum % 2) + '0');
            carry = sum / 2;
        }
        if (carry == 1)
        {
            ans += '1';
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};