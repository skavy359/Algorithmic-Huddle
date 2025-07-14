class Solution
{
public:
    vector<int> pivotArray(vector<int> &nums, int pivot)
    {
        vector<int> temp1, temp2;
        int pivot_count = 0;
        for (int i : nums)
        {
            if (i < pivot)
            {
                temp1.push_back(i);
            }
            else if (i == pivot)
                pivot_count++;
            else
                temp2.push_back(i);
        }
        int i = 0;
        for (int n : temp1)
            nums[i++] = n;
        while (pivot_count-- > 0)
            nums[i++] = pivot;
        for (int n : temp2)
            nums[i++] = n;
        return nums;
    }
};