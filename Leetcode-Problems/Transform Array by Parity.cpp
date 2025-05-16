class Solution {
    public:
        vector<int> transformArray(vector<int>& nums) {
            int odds = 0, evens = 0;
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] % 2 == 0)
                    evens++;
                else
                    odds++;
            }
            for (int i = 0; i < nums.size(); i++) {
                if (evens) {
                    nums[i] = 0;
                    evens--;
                } else {
                    nums[i] = 1;
                    odds--;
                }
            }
            return nums;
        }
    };