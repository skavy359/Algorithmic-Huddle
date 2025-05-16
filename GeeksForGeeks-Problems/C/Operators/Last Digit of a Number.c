//User function Template for C

void utility(int n){
    int ans;
    //just complete below statement
    if(n<0){
        ans = -(n%10);
    }
    else{
        ans= n%10;
    }

    //print the result
    printf("%d\n", ans);
    return 0;
}
