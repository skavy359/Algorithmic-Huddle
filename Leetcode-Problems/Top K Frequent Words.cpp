class Solution
{
public:
    vector<string> topKFrequent(vector<string> &words, int k)
    {
        unordered_map<string, int> mp;
        for (string i : words)
            mp[i]++;
        vector<pair<string, int>> arr(mp.begin(), mp.end());
        sort(arr.begin(), arr.end(), [](auto &a, auto &b)
             {
            if (a.second == b.second) {
                return a.first < b.first;
            }
            return a.second > b.second; });
        vector<string> ans;
        for (int i = 0; i < k; i++)
        {
            ans.push_back(arr[i].first);
        }
        return ans;
    }
};