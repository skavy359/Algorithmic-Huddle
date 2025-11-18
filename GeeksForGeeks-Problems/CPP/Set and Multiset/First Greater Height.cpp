// User function Template for C++

vector<int> greater_height(vector<int> v)
{
    // Your code here
    int n = v.size();
    vector<int> ans;
    ans.reserve(n);
    set<int> seen;
    for (int j = 0; j < n; ++j)
    {
        auto it = seen.upper_bound(v[j]);
        if (it == seen.end())
            ans.push_back(-1);
        else
            ans.push_back(*it);
        seen.insert(v[j]);
    }
    return ans;
}