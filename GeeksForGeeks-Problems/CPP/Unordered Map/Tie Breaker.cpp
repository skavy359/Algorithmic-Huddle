// User function Template for C++

class Solution
{
public:
    string TieBreak(vector<string> &arr)
    {
        // your code here
        unordered_map<string, int> mp;
        for (string s : arr)
            mp[s]++;
        string name = "";
        int maxi = -1;
        for (auto i : mp)
        {
            if (i.second > maxi)
            {
                name = i.first;
                maxi = i.second;
            }
            else if (i.second == maxi)
            {
                if (i.first < name)
                    name = i.first;
            }
        }
        return name;
    }
};
