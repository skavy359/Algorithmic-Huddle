class Solution{
    public:
        bool isPrime(int n)
    {
        //Your code here
        if(n==1) return false;
        if(n==2 || n==3) return true;
        if(n%2==0 || n%3==0) return false;
        
        for(int i=5;i<=sqrt(n);i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }

};
