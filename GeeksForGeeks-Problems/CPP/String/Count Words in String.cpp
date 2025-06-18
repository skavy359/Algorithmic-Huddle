// User function Template for C++

class Solution
{
public:
    int countWords(string &s)
    {
        // Your code here
        int ans = count(s.begin(), s.end(), ' ');
        return ans + 1;
    }
};
