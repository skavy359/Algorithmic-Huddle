class Solution {
    public:
        long long maxWeight(vector<int>& pizzas) {
            int n = pizzas.size();
            int days = n / 4;
            int index = n - 1;
            sort(pizzas.begin(), pizzas.end());
            long long ans = 0;
    
            for (int i = 1; i <= days; i += 2) {
                ans += pizzas[index--];
            }
            index--;
            for (int i = 2; i <= days; i += 2) {
                ans += pizzas[index];
                index -= 2;
            }
            return ans;
        }
    };