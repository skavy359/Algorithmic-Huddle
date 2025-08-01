class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp;
        for (int i : nums)
            mp[i]++;
        vector<pair<int, int>> arr(mp.begin(), mp.end());
        sort(arr.begin(), arr.end(), [](auto &a, auto &b)
             { return a.second > b.second; });
        vector<int> ans;
        for (int i = 0; i < k; i++)
        {
            ans.push_back(arr[i].first);
        }
        return ans;
    }
};