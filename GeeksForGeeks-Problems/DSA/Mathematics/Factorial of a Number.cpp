class Solution
{
public:
    int factorial(int n)
    {
        // code here
        int prod = 1;
        for (int i = 2; i <= n; i++)
        {
            prod *= i;
        }
        return prod;
    }
};