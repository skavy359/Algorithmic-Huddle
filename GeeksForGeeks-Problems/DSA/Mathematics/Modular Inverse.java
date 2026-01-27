class Solution {
    public int modInverse(int n, int m) {
        // code here
        for(int i=0;i<=m;i++){
            if((n*i)%m==1) return i;
        }
        return -1;
    }
}