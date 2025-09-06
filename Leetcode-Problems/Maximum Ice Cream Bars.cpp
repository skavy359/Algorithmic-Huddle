class Solution
{
public:
    int maxIceCream(vector<int> &costs, int coins)
    {
        sort(costs.begin(), costs.end());
        int sum = 0, ans = 0;
        for (int i : costs)
        {
            if (sum + i <= coins)
                ans++;
            else
                break;
            sum += i;
        }
        return ans;
    }
};