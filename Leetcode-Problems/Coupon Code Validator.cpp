class Solution
{
public:
    bool codeCheck(string c)
    {
        if (c.length() == 0)
            return 0;
        for (char ch : c)
        {
            if (!(isalpha(ch) || (ch >= '0' && ch <= '9') || ch == '_'))
                return false;
        }
        return true;
    }
    bool businessCheck(string s)
    {
        if (s == "electronics" || s == "grocery" || s == "pharmacy" || s == "restaurant")
            return true;
        return false;
    }

    vector<string> validateCoupons(vector<string> &code, vector<string> &businessLine, vector<bool> &isActive)
    {
        vector<string> ans;
        vector<vector<string>> temp;
        for (int i = 0; i < code.size(); i++)
        {
            if (codeCheck(code[i]) && businessCheck(businessLine[i]) && isActive[i])
            {
                temp.push_back({businessLine[i], code[i]});
            }
        }
        sort(temp.begin(), temp.end());
        for (auto i : temp)
        {
            ans.push_back(i[1]);
        }
        return ans;
    }
};