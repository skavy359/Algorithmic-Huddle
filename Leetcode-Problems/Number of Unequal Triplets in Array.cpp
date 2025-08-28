class Solution
{
public:
    int unequalTriplets(vector<int> &nums)
    {
        int ans = 0;
        unordered_map<int, int> mp;
        for (int i : nums)
            mp[i]++;
        if (mp.size() < 3)
            return 0;
        int i = 0, j = nums.size();
        for (auto k : mp)
        {
            j = j - k.second;
            ans = ans + (k.second * i * j);
            i = i + k.second;
        }
        return ans;
    }
};