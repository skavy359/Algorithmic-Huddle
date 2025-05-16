class Solution
{
public:
    int secondHighest(string s)
    {
        set<int> arr;
        for (int i = 0; i < s.length(); i++)
        {
            if ((s[i] - '0') >= 0 && (s[i] - '0') <= 9)
            {
                arr.insert(s[i] - '0');
            }
        }
        if (arr.size() <= 1)
            return -1;

        auto it = arr.rbegin();
        ++it;
        return *it;
    }
};