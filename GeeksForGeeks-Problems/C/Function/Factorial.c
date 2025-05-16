//User function Template for C


long long int factorial(int N){
       //code here
       if(N==1 || N==0)
       return 1;
       
       return N*factorial(N-1);
}
