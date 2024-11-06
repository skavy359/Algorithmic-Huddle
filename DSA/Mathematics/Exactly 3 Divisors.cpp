class Solution{
    public:
    int exactly3Divisors(int n)
    {
        //Your code here
        int ans=0;
        for(int i=2;i*i<=n;i++){
            bool isPrime=true;
            for(int j=2;j*j<=i;j++){
                if(i%j==0){
                    isPrime=false;
                    break;
                }
            }
            if(isPrime){
                ans++;
            }
        }
        return ans;
    }
};
