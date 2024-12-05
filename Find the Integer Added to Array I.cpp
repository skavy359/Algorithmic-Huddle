class Solution {
public:
    int lowestelement(vector<int>a){
        int lowest=INT_MAX;
        for(int i=0;i<a.size();i++){
            if(a[i]<lowest){
                lowest=a[i];
            }
        }
        return lowest;
    }

    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int ans1=lowestelement(nums1);
        int ans2=lowestelement(nums2);
        return ans2-ans1;      
    }
};
