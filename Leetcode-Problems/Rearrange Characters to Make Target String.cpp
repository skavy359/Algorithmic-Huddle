class Solution
{
public:
    int rearrangeCharacters(string s, string target)
    {
        int ans = INT_MAX;
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;
        for (char i : s)
        {
            mp1[i]++;
        }
        for (char i : target)
        {
            mp2[i]++;
        }
        for (auto i : mp2)
        {
            ans = min(ans, mp1[i.first] / i.second);
        }
        return ans;
    }
};