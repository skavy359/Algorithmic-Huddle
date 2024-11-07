class Solution{
    public:
        long long sumUnderModulo(long long a,long long b)
    {
        // code here
        long long m= pow(10,9)+7;
        long long c= a%m;
        long long d= b%m;
        long long ans= (c+d)%m;
        return ans;
    }
};
