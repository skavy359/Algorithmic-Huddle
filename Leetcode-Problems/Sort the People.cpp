class Solution
{
public:
    vector<string> sortPeople(vector<string> &names, vector<int> &heights)
    {
        unordered_map<int, string> ans;
        for (int i = 0; i < names.size(); i++)
        {
            ans[heights[i]] = names[i];
        }
        sort(heights.rbegin(), heights.rend());

        for (int i = 0; i < names.size(); i++)
        {
            names[i] = ans[heights[i]];
        }
        return names;
    }
};