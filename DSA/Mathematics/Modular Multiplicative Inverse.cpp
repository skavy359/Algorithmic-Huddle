class Solution{
    public:
    //Complete this function
    int modInverse(int a, int m)
    {
        //Your code here
        int c= a%m;
        for(int i=1;i<m;i++){
            if((c*(i%m)%m)==1){
                return i;
            }
        }
        return -1;
    }
};
