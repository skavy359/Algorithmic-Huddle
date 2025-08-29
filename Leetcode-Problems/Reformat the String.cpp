class Solution
{
public:
    string reformat(string s)
    {
        vector<char> alp, dig;
        for (char c : s)
        {
            if (isalpha(c))
                alp.push_back(c);
            else
                dig.push_back(c);
        }
        int diff = (dig.size() - alp.size());
        if (diff != -1 && diff != 0 && diff != 1)
        {
            return "";
        }
        string ans = "";
        int mini = min(alp.size(), dig.size());
        if (alp.size() >= dig.size())
        {
            for (int i = 0; i < mini; i++)
            {
                ans += alp[i];
                ans += dig[i];
            }
            if (alp.size() > dig.size())
                ans += alp.back();
        }
        else
        {
            for (int i = 0; i < mini; i++)
            {
                ans += dig[i];
                ans += alp[i];
            }
            if (dig.size() > alp.size())
                ans += dig.back();
        }
        return ans;
    }
};