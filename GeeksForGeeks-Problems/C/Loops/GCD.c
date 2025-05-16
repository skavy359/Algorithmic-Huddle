//User function Template for C


int gcd(int a, int b){
    int x;
    if(a>=b){
        x=b;
    }
    else{
        x=a;
    }
    int ans=1;
    for(int i=1;i<=x;i++){
        if(a%i==0 && b%i==0){
            ans=i;
        }
    }
    return ans;  
    //code here to calculate and return gcd of a and b

        
}
