class Solution
{
public:
    int findLeastNumOfUniqueInts(vector<int> &arr, int k)
    {
        unordered_map<int, int> mp;
        for (int i : arr)
            mp[i]++;
        vector<pair<int, int>> v(mp.begin(), mp.end());
        sort(v.begin(), v.end(), [](auto &a, auto &b)
             { return a.second < b.second; });
        int ans = v.size();
        for (auto &i : v)
        {
            if (k >= i.second)
            {
                k -= i.second;
                ans--;
            }
            else
            {
                break;
            }
        }
        return ans;
    }
};