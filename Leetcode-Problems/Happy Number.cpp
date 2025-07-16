class Solution
{
public:
    int sum(int n)
    {
        int sum = 0;
        while (n > 0)
        {
            sum += pow(n % 10, 2);
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n)
    {
        if (n == 1 || n == 7)
            return true;
        int getsum = 0;
        while (n > 9)
        {
            getsum = sum(n);
            if (getsum == 1 || getsum == 7)
                return true;
            n = getsum;
        }
        return false;
    }
};