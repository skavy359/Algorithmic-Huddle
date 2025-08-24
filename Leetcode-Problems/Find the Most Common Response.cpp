class Solution
{
public:
    string findCommonResponse(vector<vector<string>> &responses)
    {
        unordered_map<string, int> mp;
        for (auto &words : responses)
        {
            unordered_set<string> temp;
            for (auto &word : words)
            {
                if (!temp.count(word))
                {
                    mp[word]++;
                    temp.insert(word);
                }
            }
        }

        string ans;
        int count = 0;
        for (auto &i : mp)
        {
            if (i.second > count)
            {
                ans = i.first;
                count = i.second;
            }
            else if (i.second == count && (ans.empty() || i.first < ans))
            {
                ans = i.first;
            }
        }
        return ans;
    }
};
