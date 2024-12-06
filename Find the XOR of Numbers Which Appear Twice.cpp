class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            bool res=false;
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    res=true;
                    break;
                }
            }
            if(res){
                ans=ans^nums[i];
            }
        }
        return ans;
    }
};
