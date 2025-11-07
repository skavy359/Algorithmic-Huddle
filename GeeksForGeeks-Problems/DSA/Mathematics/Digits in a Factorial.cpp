//Logarithmic Approach
class Solution
{
public:
    int digitsInFactorial(int n)
    {
        // code here
        if (n < 0)
            return 0;
        if (n <= 1)
            return 1;

        double temp = 0;
        for (int i = 2; i <= n; i++)
        {
            temp += log10(i);
        }

        return floor(temp) + 1;
    }
};

// Best Solution Using Stirling Approximation Formula
class Solution
{
public:
    int digitsInFactorial(int n)
    {
        // code here
        if (n < 0)
            return 0;
        if (n <= 1)
            return 1;

        double temp = (n * log10(n / M_E) + log10(2 * M_PI * n) / 2.0);

        return floor(temp) + 1;
    }
};