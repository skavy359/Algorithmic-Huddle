class Solution
{
public:
    vector<vector<int>> largeGroupPositions(string s)
    {
        vector<vector<int>> ans;
        int temp = 1, startIndex = 0, endIndex = 0;
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                temp++;
                endIndex = i + 1;
            }
            else
            {
                if (temp >= 3)
                {
                    ans.push_back({startIndex, endIndex});
                }
                temp = 1;
                startIndex = i + 1;
            }
        }
        if (temp >= 3)
        {
            ans.push_back({startIndex, endIndex});
        }
        return ans;
    }
};