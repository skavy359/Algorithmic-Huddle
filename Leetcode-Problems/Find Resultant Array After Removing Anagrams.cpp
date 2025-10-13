class Solution
{
public:
    bool check(string s1, string s2)
    {
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        return s1 == s2;
    }

    vector<string> removeAnagrams(vector<string> &words)
    {
        vector<string> ans;
        int i = 0;
        for (int j = 1; j < words.size(); j++)
        {
            if (!(check(words[j], words[i])))
            {
                ans.push_back(words[i]);
                i = j;
            }
        }
        if (i != words.size())
        {
            ans.push_back(words[i]);
        }
        return ans;
    }
};