//User function Template for C

int fibonacci(int n){
    int a=1,b=1,c;
    if (n <= 1)
		return n;
	return fibonacci(n - 1) + fibonacci(n - 2);        
}
