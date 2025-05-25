class Solution
{
public:
    vector<int> diStringMatch(string s)
    {
        vector<int> ans;
        int n = s.length();
        int j = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'I')
            {
                ans.push_back(j);
                j++;
            }
            else
            {
                ans.push_back(n);
                n--;
            }
        }
        ans.push_back(j);
        return ans;
    }
};