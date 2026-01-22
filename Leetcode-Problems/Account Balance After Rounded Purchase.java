class Solution {
    public int accountBalanceAfterPurchase(int purchaseAmount) {
        int rounded;
        if (purchaseAmount % 10 == 0) {
            rounded = purchaseAmount;
        } else {
            rounded = ((purchaseAmount + 5) / 10) * 10;
        }
        return 100 - rounded;
    }
}