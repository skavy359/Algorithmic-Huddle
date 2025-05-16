class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < arr.size(); i++)
        {
            mp[arr[i]]++;
        }
        unordered_set<int> seen;
        for (auto &it : mp)
        {
            if (seen.count(it.second))
            {
                return false;
            }
            seen.insert(it.second);
        }
        return true;
    }
};