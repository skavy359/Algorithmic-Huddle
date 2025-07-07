class Solution
{
public:
    bool kLengthApart(vector<int> &nums, int k)
    {
        int temp = k;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                if (temp < k)
                    return false;
                temp = 0;
            }
            else
            {
                temp++;
            }
        }
        return true;
    }
};