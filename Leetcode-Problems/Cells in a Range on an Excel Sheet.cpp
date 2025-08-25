class Solution
{
public:
    vector<string> cellsInRange(string s)
    {
        vector<string> res;
        char c1 = s[0], c2 = s[3];
        char r1 = s[1], r2 = s[4];
        for (char ch = c1; ch <= c2; ch++)
        {
            for (char dh = r1; dh <= r2; dh++)
            {
                string ans;
                ans += ch;
                ans += dh;
                res.push_back(ans);
            }
        }
        return res;
    }
};