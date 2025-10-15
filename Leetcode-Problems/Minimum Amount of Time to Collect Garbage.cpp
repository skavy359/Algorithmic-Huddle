class Solution
{
public:
    int garbageCollection(vector<string> &garbage, vector<int> &travel)
    {
        int m = 0, p = 0, g = 0;
        int ans = 0;
        for (int i = 0; i < garbage.size(); i++)
        {
            for (char c : garbage[i])
            {
                if (c == 'G')
                {
                    g = i;
                }
                else if (c == 'P')
                {
                    p = i;
                }
                else if (c == 'M')
                {
                    m = i;
                }
                ans++;
            }
        }

        vector<int> pref(travel.size(), 0);
        pref[0] = travel[0];
        for (int i = 1; i < travel.size(); i++)
        {
            pref[i] = travel[i] + pref[i - 1];
        }

        if (p > 0)
            ans += pref[p - 1];
        if (m > 0)
            ans += pref[m - 1];
        if (g > 0)
            ans += pref[g - 1];
        return ans;
    }
};