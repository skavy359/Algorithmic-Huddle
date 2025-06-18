// User function Template for C++

// function should find if the string p is
// in the string s. Return the starting index
// of the string p in s. Return -1 if the
// string doesnot exists in s.
int findPattern(string &s, string &p)
{
    // code here
    int ans = s.find(p);
    if (ans != string::npos)
        return ans;
    return -1;
}