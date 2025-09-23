class Solution
{
public:
    // Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[], int n)
    {
        unordered_map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }
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
        vector<string> ans;
        ans.push_back(name);
        ans.push_back(to_string(maxi));
        return ans;
    }
};