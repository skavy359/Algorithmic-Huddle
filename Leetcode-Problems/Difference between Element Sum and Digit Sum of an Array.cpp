class Solution {
public:
    int digitsum(int n){
        int sum=0;
        while(n>0){
            int remainder=n%10;
            sum+=remainder;
            n=n/10;
        }
        return sum;
    }

    int differenceOfSum(vector<int>& nums) {
        int esum=0,dsum=0;
        for(int i=0;i<nums.size();i++){
            esum+=nums[i];
            dsum+= digitsum(nums[i]);
        }
        return abs(esum-dsum);
    }
};
