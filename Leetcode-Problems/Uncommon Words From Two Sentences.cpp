class Solution
{
public:
    vector<string> uncommonFromSentences(string s1, string s2)
    {
        vector<string> temp;
        stringstream ss(s1);
        string word;
        while (ss >> word)
        {
            temp.push_back(word);
        }
        stringstream ss2(s2);
        string word2;
        while (ss2 >> word2)
        {
            temp.push_back(word2);
        }
        unordered_map<string, int> mp;
        for (string s : temp)
        {
            mp[s]++;
        }
        vector<string> ans;
        for (auto i : mp)
        {
            if (i.second == 1)
            {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};