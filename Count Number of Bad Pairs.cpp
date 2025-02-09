class Solution {
    public:
        long long countBadPairs(vector<int>& nums) {
            long long count = 0;
            unordered_map<int, int> map;
    
            for (int i = 0; i < nums.size(); i++) {
                int freq = nums[i] - i;
                count += map[freq];
                map[freq]++;
            }
            long long ans = (nums.size() * (nums.size() - 1)) / 2 - count;
            return ans;
        }
    };