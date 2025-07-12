class Solution
{
public:
    string freqAlphabets(string s)
    {
        string ans = "";
        for (int i = 0; i < s.length(); i++)
        {
            int temp = 0;
            if (i + 2 < s.length() && s[i + 2] == '#')
            {
                temp = stoi(s.substr(i, 2));
                ans += (temp + 'a' - 1);
                i += 2;
            }
            else
            {
                ans += ((s[i] - '0') + 'a' - 1);
            }
        }
        return ans;
    }
};