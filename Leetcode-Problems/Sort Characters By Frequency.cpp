class Solution
{
public:
    string frequencySort(string s)
    {
        unordered_map<char, int> mp;
        for (char c : s)
        {
            mp[c]++;
        }
        vector<pair<char, int>> arr(mp.begin(), mp.end());
        sort(arr.begin(), arr.end(),
             [](auto &a, auto &b)
             { return a.second > b.second; });
        string result = "";
        for (auto i : arr)
        {
            result.append(i.second, i.first);
        }
        return result;
    }
};