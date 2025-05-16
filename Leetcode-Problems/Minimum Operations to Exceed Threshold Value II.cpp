class Solution {
    public:
        int minOperations(vector<int>& nums, int k) {
            int n = nums.size();
            priority_queue<long long int, vector<long long int> ,greater<long long int>>ans;
            for (auto i : nums) {
                ans.push(i);
            }
            long long int count = 0;
            while (ans.top() < k) {
                long long int first = ans.top();
                ans.pop();
                long long int second = ans.top();
                ans.pop();
                long long int num = 2 * min(first, second) + max(first, second);
                ans.push(num);
                count++;
            }
            return count;
        }
    };