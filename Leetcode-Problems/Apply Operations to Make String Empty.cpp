class Solution
{
public:
    string lastNonEmptyString(string s)
    {
        vector<int> freq(26, 0);
        int maxi = 0;
        for (char c : s)
        {
            freq[c - 'a']++;
            maxi = max(maxi, freq[c - 'a']);
        }

        string ans = "";
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (freq[s[i] - 'a'] == maxi)
            {
                ans += s[i];
                freq[s[i] - 'a']--;
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};