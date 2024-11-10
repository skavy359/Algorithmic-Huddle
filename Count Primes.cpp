class Solution {
public:
    int countPrimes(int n) {
        if(n<=2) return 0;
        vector<bool>primecheck(n,true);
        primecheck[0]=primecheck[1]=false;

        for(int i=2;i*i<n;i++){
            if(primecheck[i]){
                for(int j=i*i;j<n;j=j+i){
                    primecheck[j]=false;
                }
            }
        }

        int count=0;
        for(int i=2;i<n;i++){
            if(primecheck[i]){
                count++;
            }
        }
        return count;
    }
};
