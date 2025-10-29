class Solution
{
public:
    long long maximumHappinessSum(vector<int> &happiness, int k)
    {
        sort(happiness.rbegin(), happiness.rend());
        long long ans = 0;
        for (int i = 0; i < k; i++)
        {
            long long temp = happiness[i] - i;
            if (temp <= 0)
                break;
            ans += temp;
        }
        return ans;
    }
};