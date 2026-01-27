class Solution {
    public boolean checkPrime(int n){
        if(n<2) return false;
        if(n==2 || n==3) return true;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    public int exactly3Divisors(int n) {
        // code here
        int ans=0;
        for(int i=0;i*i<=n;i++){
            if(checkPrime(i)) ans++;
        }
        return ans;
    }
}
