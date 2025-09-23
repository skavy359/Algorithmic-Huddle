// User function Template for C++

// Back-end complete function Template for C++

class Solution
{
public:
    long unique_elements(vector<long> nums)
    {
        // Your code here
        long ans = 0;
        unordered_map<long, long> mp;
        for (long i : nums)
            mp[i]++;
        for (auto i : mp)
        {
            if (i.second == 1)
                ans += i.first;
        }
        return ans;
    }
};