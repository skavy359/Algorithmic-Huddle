class Solution
{
public:
    vector<string> findWords(vector<string> &words)
    {
        unordered_map<char, int> mp;
        vector<string> ans;
        for (char c : "qwertyuiop")
            mp[c] = 1;
        for (char c : "asdfghjkl")
            mp[c] = 2;
        for (char c : "zxcvbnm")
            mp[c] = 3;
        for (string s : words)
        {
            bool flag = true;
            int temp = mp[tolower(s[0])];
            for (char c : s)
            {
                c = tolower(c);
                if (mp[c] != temp)
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
                ans.push_back(s);
        }
        return ans;
    }
};