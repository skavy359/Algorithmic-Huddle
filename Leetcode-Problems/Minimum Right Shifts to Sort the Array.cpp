class Solution
{
public:
    bool check(vector<int> &nums)
    {
        int n = nums.size();
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > nums[(i + 1) % n])
                count++;
            if (count > 1)
                return false;
        }
        return true;
    }
    int minimumRightShifts(vector<int> &nums)
    {
        int n = nums.size();
        int ans = 0;
        if (check(nums))
        {
            for (int i = 0; i < n; i++)
            {
                if (nums[i] > nums[(i + 1) % n])
                {
                    ans = (i + 1) % n;
                    break;
                }
            }
        }
        else
            return -1;
        return (n - ans) % n;
    }
};