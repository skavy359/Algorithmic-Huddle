class Solution
{
public:
    string licenseKeyFormatting(string s, int k)
    {
        int val = k;
        string temp = "";
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] != '-')
            {
                temp += toupper(s[i]);
                val--;
                if (val == 0)
                {
                    temp += '-';
                    val = k;
                }
            }
        }
        if (!temp.empty() && temp.back() == '-')
            temp.pop_back();
        reverse(temp.begin(), temp.end());
        return temp;
    }
};