class Solution
{
public:
    vector<int> numberOfPairs(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        for (int i : nums)
            mp[i]++;
        int a = 0, b = 0;
        for (auto i : mp)
        {
            a = a + (i.second / 2);
            b = b + (i.second % 2);
        }
        return {a, b};
    }
};