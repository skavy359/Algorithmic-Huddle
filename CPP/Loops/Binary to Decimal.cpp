class Solution
{
public:
    int binary_to_decimal(int n)
    {
        // code here
        int ans = 0;
        int i = 0;
        while (n > 0)
        {
            int rem = n % 10;
            ans = ans + pow(2, i) * rem;
            n /= 10;
            i++;
        }
        return ans;
    }
};