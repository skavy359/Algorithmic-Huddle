void printTillN(int N)
{
    if(N>0){
        printTillN(N-1);
    printf("%d ",N);
    }
    return;
    // Write Your Code here
}
