class Solution {
    public:
        int digitsum(int n) {
            int sum = 0;
            while (n > 0) {
                sum += n % 10;
                n /= 10;
            }
            return sum;
        }
    
        int maximumSum(vector<int>& nums) {
            unordered_map<int, int> map;
            int ans = -1;
            for (int i : nums) {
                int sum = digitsum(i);
    
                if (map.find(sum) != map.end()) {
                    ans = max(ans, map[sum] + i);
                    map[sum] = max(map[sum], i);
                } else {
                    map[sum] = i;
                }
            }
            return ans;
        }
    };