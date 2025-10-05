class Solution
{
public:
    vector<int> arrayChange(vector<int> &nums,
                            vector<vector<int>> &operations)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]] = i;
        }
        for (int i = 0; i < operations.size(); i++)
        {
            int rep = operations[i][0];
            int torep = operations[i][1];
            nums[mp[rep]] = torep;
            mp[torep] = mp[rep];
            mp.erase(rep);
        }
        return nums;
    }
};