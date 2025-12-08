class Solution
{
public:
    int nonSpecialCount(int l, int r)
    {
        int limit = sqrt(r);
        vector<bool> sieve(limit + 1, true);
        sieve[0] = sieve[1] = false;
        for (int i = 2; i * i <= limit; i++)
        {
            if (sieve[i])
            {
                for (int j = i * i; j <= limit; j += i)
                {
                    sieve[j] = false;
                }
            }
        }
        int ans = r + 1 - l, count = 0;
        for (int i = 2; i <= limit; i++)
        {
            if (sieve[i])
            {
                int s = i * i;
                if (s >= l && s <= r)
                {
                    count++;
                }
            }
        }
        return ans - count;
    }
};