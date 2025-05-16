//User function Template for C

int nextPrime(int n){
    // Increment n until a prime number is found
    while (1) {
        int i;
        int isPrime = 1; // Assume n is prime until proven otherwise
        for (i = 2; i * i <= n; i++) { // Check divisibility up to square root of n
            if (n % i == 0) {
                isPrime = 0; // n is not prime
                break;
            }
        }
        if (isPrime) {
            return n; // If n is prime, return it
        }
        n++; // Move to the next number
    }
}
