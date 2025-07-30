class Solution
{
public:
    int countPoints(string rings)
    {
        unordered_map<int, set<char>> mp;
        for (int i = 1; i < rings.length(); i += 2)
        {
            mp[rings[i]].insert(rings[i - 1]);
        }
        int ans = 0;
        for (auto i : mp)
        {
            if (i.second.size() == 3)
                ans++;
        }
        return ans;
    }
};