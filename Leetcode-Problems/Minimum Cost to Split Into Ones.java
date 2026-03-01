class Solution {
    public int minCost(int n) {
        int cost = 0;
        while (n > 0) {
            int a = n - 1;
            int b = 1;
            cost += a * b;
            n--;
        }
        return cost;
    }
}

class Solution {
    public int minCost(int n) {
        return (n * (n - 1)) / 2;
    }
}