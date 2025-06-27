// User function Template for C++

// Complete this function

bool vExists(vector<int> v, int x)
{
    // Your code here
    if (find(v.begin(), v.end(), x) != v.end())
        return true;
    return false;
}