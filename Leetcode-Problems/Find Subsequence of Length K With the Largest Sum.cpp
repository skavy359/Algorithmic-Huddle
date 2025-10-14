class Solution
{
public:
    vector<int> maxSubsequence(vector<int> &nums, int k)
    {
        vector<pair<int, int>> p;
        for (int i = 0; i < nums.size(); i++)
        {
            p.push_back({nums[i], i});
        }
        sort(p.begin(), p.end(), [](const pair<int, int> &a, const pair<int, int> &b)
             { return a.first > b.first; });
        vector<pair<int, int>> temp(p.begin(), p.begin() + k);
        sort(temp.begin(), temp.end(), [](const pair<int, int> &a, const pair<int, int> &b)
             { return a.second < b.second; });
        vector<int> ans;
        for (auto i : temp)
        {
            ans.push_back(i.first);
        }
        return ans;
    }
};