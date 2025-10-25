class Solution
{
public:
    string lexSmallest(string s)
    {
        string temp = s;
        int n = s.length();

        for (int i = 1; i <= n; i++)
        {
            string t1 = s;
            reverse(t1.begin(), t1.begin() + i);
            temp = min(temp, t1);

            string t2 = s;
            reverse(t2.end() - i, t2.end());
            temp = min(temp, t2);
        }
        return temp;
    }
};
©leetcode