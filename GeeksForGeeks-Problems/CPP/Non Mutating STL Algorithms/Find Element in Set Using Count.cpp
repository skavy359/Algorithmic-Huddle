// User function Template for C++

// Complete this function
bool sExists(set<int> s, int x)
{
    // Your code here
    if (count(s.begin(), s.end(), x) == 0)
        return false;
    return true;
}