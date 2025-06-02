class Solution
{
public:
    bool strongPasswordCheckerII(string s)
    {
        bool low = false, up = false, digit = false, special = false,
             same = true;
        if (s.length() < 8)
            return false;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                low = true;
            if (s[i] >= 'A' && s[i] <= 'Z')
                up = true;
            if (s[i] >= '0' && s[i] <= '9')
                digit = true;
            if (s[i] == '!' || s[i] == '@' || s[i] == '#' || s[i] == '$' ||
                s[i] == '%' || s[i] == '^' || s[i] == '&' || s[i] == '*' ||
                s[i] == '(' || s[i] == ')' || s[i] == '-' || s[i] == '+')
                special = true;
            if (s[i] == s[i + 1])
            {
                same = false;
                return false;
            }
        }
        if (low && up && digit && special && same)
            return true;
        return false;
    }
};