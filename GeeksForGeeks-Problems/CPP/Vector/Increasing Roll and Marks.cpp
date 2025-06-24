// User function Template for C++

vector<pair<int, pair<int, int>>> increasing_List(vector<pair<int, pair<int, int>>> v)
{
    // Sort using lambda function
    sort(v.begin(), v.end(), [](const pair<int, pair<int, int>> &a, const pair<int, pair<int, int>> &b)
         {
        if (a.first != b.first) {
            return a.first < b.first;
        }
        if (a.second.first != b.second.first) {
            return a.second.first < b.second.first;
        }
        return a.second.second < b.second.second; });

    return v;
}
