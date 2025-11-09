class Solution
{
public:
    int minOperations(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        int ans = 0;
        for (auto i : mp)
        {
            int temp = i.second;
            if (temp == 1)
                return -1;
            ans += temp / 3;
            if (temp % 3 != 0)
                ans++;
        }
        return ans;
    }
};