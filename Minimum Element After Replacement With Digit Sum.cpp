class Solution {
public:
    int minElement(vector<int>& nums) {
        int min=nums[0];
        for(int i=0;i<nums.size();i++){
            int sum=0;
            int temp=nums[i];
            while(temp>0){
                int rem= temp%10;
                sum+=rem;
                temp=temp/10;
            }
            nums[i]=sum;
            if(nums[i]<min){
                min=nums[i];
            }
        }
        return min;
    }
};
