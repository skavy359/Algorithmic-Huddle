class Solution
{
public:
    bool isSameAfterReversals(int num)
    {
        int temp = num;
        int reverse = 0;
        while (temp > 0)
        {
            int rem = temp % 10;
            reverse = reverse * 10 + rem;
            temp /= 10;
        }
        int reverse2 = 0;
        while (reverse > 0)
        {
            int rem = reverse % 10;
            reverse2 = reverse2 * 10 + rem;
            reverse /= 10;
        }
        if (num == reverse2)
            return true;
        return false;
    }
};