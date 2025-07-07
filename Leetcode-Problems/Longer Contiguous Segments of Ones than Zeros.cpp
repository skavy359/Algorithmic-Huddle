class Solution
{
public:
    bool checkZeroOnes(string s)
    {
        int one = 0, zero = 0;
        int ans_ones = 0, ans_zero = 0;
        for (char c : s)
        {
            if (c == '1')
            {
                one += 1;
                zero = 0;
            }
            else
            {
                zero += 1;
                one = 0;
            }
            ans_zero = max(ans_zero, zero);
            ans_ones = max(ans_ones, one);
        }
        return ans_ones > ans_zero;
    }
};