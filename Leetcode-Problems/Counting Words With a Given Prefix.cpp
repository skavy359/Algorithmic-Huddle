class Solution
{
public:
    int prefixCount(vector<string> &words, string pref)
    {
        int n = pref.length();
        int ans = 0;
        for (int i = 0; i < words.size(); i++)
        {
            if (pref == words[i].substr(0, n))
                ans++;
        }
        return ans;
    }
};