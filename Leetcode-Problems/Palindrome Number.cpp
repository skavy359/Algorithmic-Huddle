class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x;
        long long ans=0;
        while(temp>0){
            int rem=temp%10;
            ans=ans*10+rem;
            temp=temp/10;
        }
        if(ans==x){
            return true;
        }
        else{
            return false;
        }
    }
};
