class Solution
{
public:
    int totalMoney(int n)
    {
        int weeks = n / 7;
        int days = n % 7;
        int total = 0;
        total += 7 * weeks * (weeks - 1) / 2 + weeks * 28;

        for (int i = 1; i <= days; i++)
        {
            total += weeks + i;
        }

        return total;
    }
};
