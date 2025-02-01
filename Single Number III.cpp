class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int Xor1 = 0;
        int bit, Xor2 = 0;
        for (int num : nums)
            Xor1 ^= num;
        for (int i = 0; i < 32; i++) {
            if (Xor1 & 1 << i) {
                bit = i;
                break;
            }
        }
        for (int num : nums) {
            if (num & 1 << bit) {
                Xor2 ^= num;
            }
        }
        return {Xor1 ^ Xor2, Xor2};
    }
};