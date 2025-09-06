class Solution
{
public:
    int getLeastFrequentDigit(int n)
    {
        unordered_map<int, int> mp;
        while (n > 0)
        {
            int rem = n % 10;
            mp[rem]++;
            n /= 10;
        }
        int ans = 0, mini = INT_MAX;
        for (auto i : mp)
        {
            if (i.second < mini)
            {
                ans = i.first;
                mini = i.second;
            }
            else if (i.second == mini)
            {
                ans = min(ans, i.first);
            }
        }
        return ans;
    }
};