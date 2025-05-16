class Solution
{
public:
    int maximizeSum(vector<int> &nums, int k)
    {
        int sum = 0;
        int maxi = *max_element(nums.begin(), nums.end());
        for (int i = maxi; i < maxi + k; i++)
        {
            sum += i;
        }
        return sum;
    }
};