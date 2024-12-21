//User function Template for C

void utility(int d, int n){
    
    //write your code here
    int res=n%7;
    int mod=d-res;
    if(mod>=0){
        printf("%d",mod);
    }
    else{
        mod=mod+7;
        printf("%d",mod);
    }
    
    return 0;

   
}
