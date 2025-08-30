class Solution
{
public:
    bool isPrefixString(string s, vector<string> &words)
    {
        string temp = "";
        for (string a : words)
        {
            temp += a;
            if (s == temp)
                return true;
        }
        return false;
    }
};