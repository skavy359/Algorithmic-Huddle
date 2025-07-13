class Solution
{
public:
    int maxDivScore(vector<int> &nums, vector<int> &divisors)
    {
        int score = INT_MIN;
        int ans = INT_MAX;
        for (int i : divisors)
        {
            int temp1 = 0;
            for (int j : nums)
            {
                if (j % i == 0)
                {
                    temp1++;
                }
            }
            if (temp1 > score)
            {
                score = temp1;
                ans = i;
            }
            else if (temp1 == score)
            {
                ans = min(ans, i);
            }
        }
        return ans;
    }
};