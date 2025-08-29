class Solution
{
public:
    bool canBeIncreasing(vector<int> &nums)
    {
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] <= nums[i - 1])
            {
                vector<int> a = nums;
                a.erase(a.begin() + i);
                if (isIncreasing(a))
                    return true;

                vector<int> b = nums;
                b.erase(b.begin() + i - 1);
                if (isIncreasing(b))
                    return true;

                return false;
            }
        }
        return true;
    }

    bool isIncreasing(const vector<int> &v)
    {
        for (int i = 1; i < v.size(); i++)
        {
            if (v[i] <= v[i - 1])
                return false;
        }
        return true;
    }
};

// ANOTHER SOLUTION
class Solution
{
public:
    bool canBeIncreasing(vector<int> &nums)
    {
        int removed = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] <= nums[i - 1])
            {
                removed++;
                if (removed > 1)
                    return false;
                if (i > 1 && nums[i] <= nums[i - 2])
                {
                    nums[i] = nums[i - 1];
                }
            }
        }
        return true;
    }
};
