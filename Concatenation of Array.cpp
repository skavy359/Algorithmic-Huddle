class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n= (nums.size())*2;
        vector<int>arr(n);
        for(int i=0;i<nums.size();i++){
            arr[i]=nums[i];
            arr[i+nums.size()]=nums[i];
        }
        return arr;
    }
};
