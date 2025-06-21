class Solution
{
public:
    bool check(int n)
    {
        while (n > 0)
        {
            int rem = n % 10;
            if (rem == 0)
                return false;
            n /= 10;
        }
        return true;
    }

    vector<int> getNoZeroIntegers(int n)
    {
        int a, b;
        for (a = 1; a < n; a++)
        {
            b = n - a;
            if (check(a) && check(b))
            {
                break;
            }
        }
        return {a, b};
    }
};