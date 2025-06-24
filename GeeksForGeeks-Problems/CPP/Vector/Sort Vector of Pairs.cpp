// User function Template for C++

// Complete this function
vector<pair<int, int>> sortBySecond(vector<pair<int, int>> v)
{
    auto comparator = [](const pair<int, int> &a, const pair<int, int> &b)
    {
        if (a.second == b.second)
        {
            return a.first > b.first;
        }
        return a.second > b.second;
    };

    sort(v.begin(), v.end(), comparator);
    return v;
}
