class Solution
{
public:
    int countSegments(string s)
    {
        stringstream ss(s);
        string word;
        int ans = 0;
        while (ss >> word)
        {
            ans++;
        }
        return ans;
    }
};