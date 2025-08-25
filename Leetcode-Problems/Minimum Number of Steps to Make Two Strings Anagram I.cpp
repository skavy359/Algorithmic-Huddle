class Solution
{
public:
    int minSteps(string s, string t)
    {
        int mpS[26] = {0};
        int mpT[26] = {0};
        for (char c : s)
            mpS[c - 'a']++;
        for (char c : t)
            mpT[c - 'a']++;
        int ans = 0;
        for (int i = 0; i < 26; i++)
        {
            if (mpT[i] < mpS[i])
                ans += mpS[i] - mpT[i];
        }
        return ans;
    }
};