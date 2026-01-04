class Solution
{
public:
    int check(int n)
    {
        int temp = 0;
        int sum = 0;
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                if (i * i == n)
                {
                    temp++;
                    sum += i;
                }
                else
                {
                    temp += 2;
                    sum += i + (n / i);
                }
            }
        }
        if (temp == 4)
        {
            return sum;
        }
        return 0;
    }

    int sumFourDivisors(vector<int> &nums)
    {
        int sum = 0;
        for (int i : nums)
        {
            sum += check(i);
        }
        return sum;
    }
};