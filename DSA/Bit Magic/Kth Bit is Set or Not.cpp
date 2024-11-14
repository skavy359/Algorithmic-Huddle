class Solution {
  public:
    bool checkKthBit(int n, int k) {
        return ((n>>k)&1); //for zero indexed yeh hoga 
        // return ((n>>(k-1))&1) for one indexed 
    }
};
