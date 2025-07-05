class Solution
{
public:
    int findLucky(vector<int> &arr)
    {
        unordered_map<int, int> mp;
        for (int i : arr)
            mp[i]++;
        int ans = -1;
        for (auto i : mp)
        {
            if (i.first == i.second)
            {
                ans = max(ans, i.second);
            }
        }
        return ans;
    }
};