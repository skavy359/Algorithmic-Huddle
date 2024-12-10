class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int n = nums.size();
        int start = 0;
        int end = n - 1;
        long long ans = 0;
        while (start <= end) {
            if (start == end)
                ans += nums[start];
            else {
                string res = to_string(nums[start]) + to_string(nums[end]);
                ans += stoll(res);
            }
            start++;
            end--;
        }
        return ans;
    }
};
