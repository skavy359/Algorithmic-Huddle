class Solution
{
public:
    vector<int> processQueries(vector<int> &queries, int m)
    {
        vector<int> p(m);
        for (int i = 1; i <= m; i++)
            p[i - 1] = i;
        vector<int> ans;
        for (int i = 0; i < queries.size(); i++)
        {
            auto it = find(p.begin(), p.end(), queries[i]);
            int index = it - p.begin();
            ans.push_back(index);
            rotate(p.begin(), p.begin() + index, p.begin() + index + 1);
        }
        return ans;
    }
};