class Solution {
  public:
    
    bool checking(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            return true;
        }
        return false;
    }
    
    vector<int> absDifference(string& s) {
        // code here
        vector<int>answer;
        int fov=0,foc=0;
        for(int i=0;i<s.length();i++){
            if(checking(s[i])) fov++;
            else foc++;
            
            answer.push_back(abs(fov-foc));
        }
        return answer;
    }
};