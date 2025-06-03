class Solution
{
public:
    int maxDifference(string s)
    {
        unordered_map<char, int> mp;
        for (char c : s)
        {
            mp[c]++;
        }
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for (auto &it : mp)
        {
            if (it.second % 2 != 0)
            {
                if (it.second > maxi)
                    maxi = it.second;
            }
            else
            {
                if (it.second < mini)
                    mini = it.second;
            }
        }
        return maxi - mini;
    }
};