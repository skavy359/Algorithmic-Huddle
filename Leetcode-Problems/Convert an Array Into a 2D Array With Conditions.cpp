class Solution
{
public:
    vector<vector<int>> findMatrix(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        for (int i : nums)
            mp[i]++;
        vector<vector<int>> ans;
        while (!mp.empty())
        {
            vector<int> temp;
            vector<int> erasingValues;
            for (auto &i : mp)
            {
                if (i.second > 0)
                {
                    temp.push_back(i.first);
                    i.second--;
                }
                if (i.second == 0)
                {
                    erasingValues.push_back(i.first);
                }
            }
            for (int i : erasingValues)
                mp.erase(i);
            ans.push_back(temp);
        }
        return ans;
    }
};

// ANOTHER SOLUTION
class Solution
{
public:
    vector<vector<int>> findMatrix(vector<int> &nums)
    {
        vector<int> arr(nums.size() + 1);
        vector<vector<int>> ans;
        for (int i : nums)
        {
            if (arr[i] >= ans.size())
                ans.push_back({});
            ans[arr[i]].push_back(i);
            arr[i]++;
        }
        return ans;
    }
};
