class Solution
{
public:
    int sumDivisibleByK(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp;
        for (int i : nums)
            mp[i]++;
        int sum = 0;
        for (int i : nums)
        {
            if (mp[i] % k == 0)
            {
                sum += i;
            }
        }
        return sum;
    }
};