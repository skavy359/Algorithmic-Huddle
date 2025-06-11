class Solution
{
public:
    int product(int temp)
    {
        int ans = 1;
        while (temp > 0)
        {
            int rem = temp % 10;
            ans *= rem;
            temp /= 10;
        }
        return ans;
    }

    int smallestNumber(int n, int t)
    {
        while (true)
        {
            int temp = product(n);
            if (temp % t == 0)
            {
                return n;
            }
            else
            {
                n++;
            }
        }
        return 1;
    }
};