class Solution{
    public:
        //Complete this function
    double termOfGP(int A,int B,int N)
    {
       double cr= (double)B/A;
       double ans= A* pow(cr,N-1);
       return ans;
    }
};
