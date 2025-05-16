class Solution {
public:
    int reverse(int x) {
        int temp= abs(x);
        int res=0;
        while(temp>0){
            int rem=temp%10;
            if (res > INT_MAX / 10 || (res == INT_MAX / 10 && rem > 7)) {
                return 0;
            }
            res=res*10+rem;
            temp=temp/10;
        }
        if(x>=0){
            return res;
        }
        else{
            return -res;
        }
    }
};
