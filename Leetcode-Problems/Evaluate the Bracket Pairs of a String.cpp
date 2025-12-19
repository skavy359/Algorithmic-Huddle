class Solution
{
public:
    string evaluate(string s, vector<vector<string>> &knowledge)
    {
        unordered_map<string, string> mp;
        for (auto s : knowledge)
        {
            mp[s[0]] = s[1];
        }
        string khushi = "";
        string temp = "";
        bool flag = false;
        for (char c : s)
        {
            if (c == '(')
            {
                flag = true;
            }
            else if (c == ')')
            {
                flag = false;
                if (mp.find(temp) != mp.end())
                {
                    temp = mp[temp];
                }
                else
                {
                    temp = "?";
                }
                khushi += temp;
                temp = "";
            }
            else
            {
                if (flag)
                {
                    temp += c;
                }
                else
                {
                    khushi += c;
                }
            }
        }
        return khushi;
    }
};