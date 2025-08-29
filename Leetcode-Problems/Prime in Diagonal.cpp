class Solution
{
public:
    bool isPrime(int n)
    {
        if (n <= 1)
            return false;
        if (n == 2)
            return true;
        if (n % 2 == 0)
            return false;
        for (int i = 3; i * i <= n; i += 2)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }

    int diagonalPrime(vector<vector<int>> &nums)
    {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (isPrime(nums[i][i]))
                ans = max(ans, nums[i][i]);
            if (isPrime(nums[i][nums.size() - 1 - i]))
                ans = max(ans, nums[i][nums.size() - 1 - i]);
        }
        return ans;
    }
};