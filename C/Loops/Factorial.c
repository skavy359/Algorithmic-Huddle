//User function Template for C

int nFactorial(int n){
    int ans = 1;
    if(n==0){
        return ans;
    }
    while(n>0){
        ans=ans*n;
        n=n-1;
    }
    
    
    //Write your code here
    
    return ans;
}
