class Solution
{
public:
    int numWaterBottles(int numBottles, int numExchange)
    {
        int ans = numBottles;
        while (numBottles >= numExchange)
        {
            int temp = numBottles;
            ans += (numBottles / numExchange);
            numBottles /= numExchange;
            numBottles += temp % numExchange;
        }
        return ans;
    }
};