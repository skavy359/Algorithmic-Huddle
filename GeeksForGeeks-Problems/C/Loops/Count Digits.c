//User function Template for C

void countDigits(int n){

    //write your code here
    //print number of digits in n
    int x,y=0;
    while(n>0){
        n=n/10;
        y=y+1;
    }
    printf("%d",y);

}
