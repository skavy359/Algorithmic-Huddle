class Solution
{
public:
    bool areOccurrencesEqual(string s)
    {
        unordered_map<char, int> mp;
        for (int i = 0; i < s.length(); i++)
        {
            mp[s[i]]++;
        }
        int temp = mp.begin()->second;
        for (auto x : mp)
        {
            if (x.second != temp)
            {
                return false;
            }
        }
        return true;
    }
};