class Solution
{
public:
    bool isGoodArray(vector<int> &nums)
    {
        int gc = nums[0];
        for (int i : nums)
            gc = gcd(gc, i);
        if (gc == 1)
            return true;
        return false;
    }
};