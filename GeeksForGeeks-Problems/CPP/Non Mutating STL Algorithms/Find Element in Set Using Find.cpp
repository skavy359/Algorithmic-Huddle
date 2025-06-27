// User function Template for C++

// Complete this function

bool sExists(set<int> s, int x)
{
    // Your code here
    if (find(s.begin(), s.end(), x) != s.end())
        return true;
    return false;
}