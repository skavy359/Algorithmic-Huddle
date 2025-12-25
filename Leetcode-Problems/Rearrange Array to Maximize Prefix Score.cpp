class Solution
{
public:
    int maxScore(vector<int> &nums)
    {
        sort(nums.rbegin(), nums.rend());
        long long sum = 0;
        int khushi = 0;
        for (int i : nums)
        {
            sum += i;
            if (sum <= 0)
            {
                break;
            }
            khushi++;
        }
        return khushi;
    }
};