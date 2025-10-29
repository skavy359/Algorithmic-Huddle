class Solution
{
public:
    int minimumPushes(string word)
    {
        int ans = 0, count = 1;
        for (int i = 0; i < word.size(); i++)
        {
            if (i != 0 && i % 8 == 0)
                count++;
            ans += count;
        }
        return ans;
    }
};