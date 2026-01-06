class Solution
{
public:
    int minimumIndex(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        for (int i : nums)
            mp[i]++;
        int maxi = INT_MIN, domi = 0;
        for (auto i : mp)
        {
            if (i.second > maxi)
            {
                maxi = i.second;
                domi = i.first;
            }
        }
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == domi)
            {
                count++;
            }
            if (count * 2 > (i + 1) && (maxi - count) * 2 > (nums.size() - i - 1))
            {
                return i;
            }
        }
        return -1;
    }
};