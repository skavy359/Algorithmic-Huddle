class Solution
{
public:
    int accountBalanceAfterPurchase(int purchaseAmount)
    {
        int temp = (purchaseAmount + 5) / 10;
        return 100 - temp * 10;
    }
};