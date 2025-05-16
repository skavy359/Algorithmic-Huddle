class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int count_of_zeroes=0;
        int count_of_ones=0;
        int count_of_twos=0;
        
        for(int i : arr){
            if(i==0) count_of_zeroes++;
            else if(i==1) count_of_ones++;
            else if(i==2) count_of_twos++;
        }
        
        for(int i=0;i<count_of_zeroes;i++) arr[i]=0;
        for(int i=count_of_zeroes;i<count_of_zeroes+count_of_ones;i++) arr[i]=1;
        for(int i=count_of_zeroes+count_of_ones;i<arr.size();i++) arr[i]=2;
    }
};