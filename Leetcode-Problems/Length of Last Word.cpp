class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        bool word=false;

        for(int i=s.length()-1;i>=0;i--){
            if(s[i]!=' '){
                count++;
                word=true;
            }
            else if(word){
                break;
            }
        }
        return count;
    }
};
