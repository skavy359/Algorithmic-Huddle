class Solution{
    public:
    int digitsInFactorial(int n)
    {
        // code here
        double res=0;
        for(int i=1;i<=n;i++){
            res=res+log10(i);
        }
        
        return static_cast<int>(floor(res))+1;
    }
    
};
