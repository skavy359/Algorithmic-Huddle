class Solution
{
public:
    int mostFrequentEven(vector<int> &nums)
    {
        int temp = 0, val = INT_MAX;
        unordered_map<int, int> mp;
        for (int i : nums)
        {
            if (i % 2 == 0)
            {
                mp[i]++;
                if (mp[i] > temp || mp[i] == temp && i < val)
                {
                    val = i;
                    temp = mp[i];
                }
            }
        }
        return temp == 0 ? -1 : val;
    }
};