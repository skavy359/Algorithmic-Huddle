class Solution
{
public:
    vector<int> findLonely(vector<int> &nums)
    {
        vector<int> ans;
        unordered_map<int, int> mp;
        for (int i : nums)
        {
            mp[i]++;
        }
        for (auto i : mp)
        {
            if (i.second == 1)
            {
                auto it1 = mp.find(i.first - 1);
                auto it2 = mp.find(i.first + 1);
                if (it1 == mp.end() && it2 == mp.end())
                {
                    ans.push_back(i.first);
                }
            }
        }
        return ans;
    }
};