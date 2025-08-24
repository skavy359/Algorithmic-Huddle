class Solution
{
public:
    string findValidPair(string s)
    {
        unordered_map<int, int> mp;
        for (char c : s)
        {
            mp[c]++;
        }
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] != s[i + 1] && mp[s[i]] == s[i] - '0' &&
                mp[s[i + 1]] == s[i + 1] - '0')
            {
                string ans;
                ans += s[i];
                ans += s[i + 1];
                return ans;
            }
        }
        return "";
    }
};