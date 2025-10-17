class Solution
{
public:
    bool check(vector<int> &nums)
    {
        // write your code here
        int count = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] < nums[i - 1])
            {
                count++;
            }
            if (count == 2)
            {
                return false;
            }
        }
        return true;
    }
};