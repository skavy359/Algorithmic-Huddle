// Back-end complete function Template for C++

class Solution
{
public:
    vector<int> commonElements(vector<int> &a, vector<int> &b)
    {
        // Your code here
        map<int, int> mp;
        for (int i : a)
            mp[i]++;
        vector<int> ans;
        for (int i : b)
        {
            if (mp[i] > 0)
            {
                ans.push_back(i);
                mp[i]--;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};