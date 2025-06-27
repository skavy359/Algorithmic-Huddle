// User function Template for C++
class Solution
{
public:
    bool searchPattern(string &txt, string &pat)
    {
        // your code here
        if (txt.find(pat) != string::npos)
            return true;
        return false;
    }
};
