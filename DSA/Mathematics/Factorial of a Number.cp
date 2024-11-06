class Solution{
    public:
        // Complete this function
    long long factorial(int N) {
        // Your code here
        long long product=1;
        while(N>0){
            product=product*N;
            N--;
        }
        return product;
    }

};
