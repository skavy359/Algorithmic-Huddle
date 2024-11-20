class Solution {
public:
    int finalValueAfterOperations(vector<string>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i][0]=='-'){
                count--;
            }
            else if(nums[i][0]=='+'){
                count++;
            }
            else if(nums[i][0]=='X' && nums[i][1]=='-'){
                count--;
            }
            else if(nums[i][0]=='X' && nums[i][1]=='+'){
                count++;
            }
        }
        return count;
    }
};
