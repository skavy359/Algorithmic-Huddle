class Solution
{
public:
    long long countPairs(vector<string> &words)
    {
        long long ans = 0;
        unordered_map<string, int> mp;
        for (string s : words)
        {
            string temp(s.length(), 'a');
            int diff = s[0] - 'a';
            for (int i = 0; i < s.length(); i++)
            {
                temp[i] = 'a' + (s[i] - 'a' - diff + 26) % 26;
            }
            ans += mp[temp];
            mp[temp]++;
        }
        return ans;
    }
};