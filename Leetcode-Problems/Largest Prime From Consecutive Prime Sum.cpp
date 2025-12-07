class Solution
{
public:
    int largestPrime(int n)
    {
        vector<bool> prime(n + 1, true);
        for (int p = 2; p * p <= n; p++)
        {
            if (prime[p] == true)
            {
                for (int i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }

        int ans = 0;
        long long int sum = 0;
        for (int i = 2; i <= n; i++)
        {
            if (prime[i])
            {
                sum += i;
                if (sum > n)
                    break;
                if (prime[sum])
                    ans = sum;
            }
        }
        return ans;
    }
};