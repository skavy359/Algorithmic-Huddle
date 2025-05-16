//User function Template for C
int isPrime(int n){
    int a = 1;
    for(int i=2;i<n;i++){
        if (n%i==0) {
            a=0;
            break;
        }
    }
    return a;
}
// This function should print the prime factorization
// of the number n
// The new line is given by the driver's code.
void printPrimeFactorization(int n){
    // code here
    for(int i=2; i<=n; i++) {
        if (isPrime(i)==1) {
            int x = i;
            while(n%x==0){
                printf("%d ",i);
                x=x*i;
            }
        }
    }
    
}
