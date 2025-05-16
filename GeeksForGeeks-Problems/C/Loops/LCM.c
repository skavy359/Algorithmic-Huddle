//User function Template for C

int LCM(int a, int b){

    //write your code here
    //return LCM of a and b
    int x,y;
    x=a*b;
    if(a>=b){
        y=a;
    }
    else{
        y=b;
    }
    int ans=1;
    for(int i=y;i<=x;i++){
        if (i%a==0 && i%b==0){
            ans=i;
            break;
        }
    }
    return ans;
    
    
}
