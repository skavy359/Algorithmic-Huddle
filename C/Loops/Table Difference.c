//User function Template for C

void difference(int n1, int n2){
    int a,b;
    
    //Write your code here
    for(int i=1;i<11;i++){
        if(n1>=n2){
        a=n1*i;
        b=n2*i;
        printf("%d ",a-b);
        }
        else{
        b=n1*i;
        a=n2*i;
        printf("%d ",b-a);
        }
    
    // printf("%d",b-a);
    
}
}
