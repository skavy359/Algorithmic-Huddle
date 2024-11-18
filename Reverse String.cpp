class Solution {
public:
    void reverseString(vector<char>& s) {
        int arr[s.size()];
        for(int i=0;i<s.size();i++){
            arr[i]=s[s.size()-1-i];
        }
        for(int i=0;i<s.size();i++){
            s[i]=arr[i];
        }
    }
};
