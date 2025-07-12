class Solution
{
public:
    string mostCommonWord(string paragraph, vector<string> &banned)
    {
        unordered_map<string, int> mp;
        unordered_set<string> ban(banned.begin(), banned.end());
        string word = "";
        for (char c : paragraph)
        {
            if (isalpha(c))
            {
                word += tolower(c);
            }
            else if (!word.empty())
            {
                if (!ban.count(word))
                {
                    mp[word]++;
                }
                word = "";
            }
        }
        if (!word.empty() && !ban.count(word))
        {
            mp[word]++;
        }
        int maxi = INT_MIN;
        string ans;
        for (auto i : mp)
        {
            if (i.second > maxi)
            {
                maxi = i.second;
                ans = i.first;
            }
        }
        return ans;
    }
};