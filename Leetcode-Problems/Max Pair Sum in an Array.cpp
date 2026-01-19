class Solution
{
public:
    int maxSum(vector<int> &nums)
    {
        int ans = -1;
        vector<vector<int>> mp(10);
        for (int i : nums)
        {
            int temp = i;
            int maxi = -1;
            while (temp > 0)
            {
                int rem = temp % 10;
                maxi = max(rem, maxi);
                temp /= 10;
            }
            mp[maxi].push_back(i);
        }
        for (auto t : mp)
        {
            sort(t.rbegin(), t.rend());
            if (t.size() >= 2)
            {
                ans = max(ans, t[0] + t[1]);
            }
        }
        return ans;
    }
};