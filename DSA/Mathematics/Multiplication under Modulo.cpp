class Solution{
    public:
        int multiplicationUnderModulo(long long a,long long b)
    {
        //your code here
        long long m= pow(10,9)+7;
        long long c= a%m;
        long long d= b%m;
        long long ans= (c*d)%m;
        return ans;
    }
};
