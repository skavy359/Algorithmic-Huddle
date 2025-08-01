class Solution
{
public:
    string largestWordCount(vector<string> &messages, vector<string> &senders)
    {
        vector<int> words;
        for (int i = 0; i < messages.size(); i++)
        {
            int spaces = 0;
            for (int j = 0; j < messages[i].size(); j++)
            {
                if (messages[i][j] == ' ')
                    spaces++;
            }
            words.push_back(spaces + 1);
        }
        unordered_map<string, int> mp;
        for (int i = 0; i < senders.size(); i++)
        {
            mp[senders[i]] += words[i];
        }
        string ans;
        int maxi = INT_MIN;
        for (auto i : mp)
        {
            if (i.second == maxi)
            {
                if (i.first > ans)
                {
                    ans = i.first;
                }
            }
            if (i.second > maxi)
            {
                ans = i.first;
                maxi = i.second;
            }
        }
        return ans;
    }
};