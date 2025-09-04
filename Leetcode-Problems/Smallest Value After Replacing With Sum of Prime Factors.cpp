class Solution
{
public:
    bool isPrime(int n)
    {
        if (n <= 1)
            return false;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }

    int primeFactors(int n)
    {
        vector<int> ans;
        for (int i = 2; i * i <= n; i++)
        {
            while (n % i == 0)
            {
                ans.push_back(i);
                n /= i;
            }
        }
        if (n > 1)
            ans.push_back(n);

        int res = accumulate(ans.begin(), ans.end(), 0);
        return res;
    }

    int smallestValue(int n)
    {
        while (!isPrime(n))
        {
            int next = primeFactors(n);
            if (next == n)
                break;
            n = next;
        }
        return n;
    }
};