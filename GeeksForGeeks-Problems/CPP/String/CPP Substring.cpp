// User function Template for C++

class Solution
{
public:
    string substring(string &s, int L, int R)
    {
        // code here
        string ans = s.substr(L, R - L + 1);
        return ans;
    }
};