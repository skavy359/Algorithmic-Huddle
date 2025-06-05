class Solution
{
public:
    int maxFreqSum(string s)
    {
        unordered_map<char, int> mp;
        for (char c : s)
            mp[c]++;
        int vow = 0, con = 0;
        for (auto i : mp)
        {
            if (i.first == 'a' || i.first == 'e' || i.first == 'i' ||
                i.first == 'o' || i.first == 'u')
            {
                vow = max(vow, i.second);
            }
            else
            {
                con = max(con, i.second);
            }
        }
        return vow + con;
    }
};