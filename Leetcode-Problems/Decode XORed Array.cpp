class Solution
{
public:
    vector<int> decode(vector<int> &encoded, int first)
    {
        vector<int> ans;
        ans.push_back(first);
        int prev = first;
        for (int i : encoded)
        {
            ans.push_back(prev ^ i);
            prev = ans[ans.size() - 1];
        }
        return ans;
    }
};