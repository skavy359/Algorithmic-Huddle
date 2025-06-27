// User function Template for C++

int upBound(vector<int> v, int k)
{
    // your code here
    auto it = upper_bound(v.begin(), v.end(), k);
    return *it;
}

int lowBound(vector<int> v, int k)
{

    // your code here
    auto it = lower_bound(v.begin(), v.end(), k);
    return *it;
}
