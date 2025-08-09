class Solution
{
public:
    bool isMonotonic(vector<int> &nums)
    {
        bool incr = true, decr = true;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] < nums[i - 1])
                incr = false;
            else if (nums[i] > nums[i - 1])
                decr = false;
            if (incr == false && decr == false)
                return false;
        }
        return incr || decr;
    }
};