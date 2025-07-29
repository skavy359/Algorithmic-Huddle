class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        unordered_map<char, char> mpS;
        unordered_map<char, char> mpT;

        for (int i = 0; i < s.length(); i++)
        {
            if (mpS.count(s[i]) && mpS[s[i]] != t[i])
                return false;
            if (mpT.count(t[i]) && mpT[t[i]] != s[i])
                return false;

            mpS[s[i]] = t[i];
            mpT[t[i]] = s[i];
        }
        return true;
    }
};