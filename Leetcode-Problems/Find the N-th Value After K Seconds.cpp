#define MOD 1000000007
class Solution
{
public:
    int valueAfterKSeconds(int n, int k)
    {
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            arr[i] = 1;
        while (k--)
        {
            for (int i = 1; i < n; i++)
            {
                arr[i] = (arr[i - 1] + arr[i]) % MOD;
            }
        }
        return arr[n - 1] % MOD;
    }
};