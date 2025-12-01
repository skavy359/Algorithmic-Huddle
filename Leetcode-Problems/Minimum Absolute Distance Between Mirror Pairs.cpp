class Solution
{
public:
    int rev(int temp)
    {
        int rev = 0;
        while (temp > 0)
        {
            rev = rev * 10 + (temp % 10);
            temp /= 10;
        }
        return rev;
    }

    int minMirrorPairDistance(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        int ans = INT_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            if (mp.find(nums[i]) != mp.end())
            {
                ans = min(ans, i - mp[nums[i]]);
            }
            mp[rev(nums[i])] = i;
        }
        if (ans == INT_MAX)
            return -1;
        return ans;
    }
};